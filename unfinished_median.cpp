#include <stdio.h>
#include <string.h>

#define VAR 150
#define NAMELENGTH 50
#define LINE 50

#define GOTO 1
#define IF 2
#define PRINT 3
#define STOP 4
#define ASSIGN 5

#define ADD 1
#define MUL 2
#define MOD 3
#define SUB 4
#define DIV 5

#define EQL 6
#define NOTEQL 7
#define SMALLER 8
#define LARGER 9
#define SMALLEREQL 10
#define LARGEREQL 11

int oprToComp(char name[]){
	if (strcmp(name, "+") == 0){
		return ADD;
	}
	if (strcmp(name, "-") == 0){
		return SUB;
	}
	if (strcmp(name, "*") == 0){
		return MUL;
	}
	if (strcmp(name, "/") == 0){
		return DIV;
	}
	if (strcmp(name, "%") == 0){
		return MOD;
	}
	if (strcmp(name, "==") == 0){
		return EQL;
	}
	if (strcmp(name, "!=") == 0){
		return NOTEQL;
	}
	if (strcmp(name, ">") == 0){
		return LARGER;
	}
	if (strcmp(name, ">=") == 0){
		return LARGEREQL;
	}
	if (strcmp(name, "<") == 0){
		return SMALLER;
	}
	if (strcmp(name, "<=") == 0){
		return SMALLEREQL;
	}

	printf("invalid op %s", name);
	exit(-1);
}



char variableName[VAR][NAMELENGTH];
int variableValue[VAR];
int variableNum;

int nameToIndex(char name[]){
	int i;
	for (i = 0; i < variableNum; i++){
		if (strcmp(variableName[i], name) == 0){
			return i;
		}
	}
	printf("undefined variable %s", name);
	exit(-1);
}


int main(){
	/*get all variables*/
	char name[NAMELENGTH];
	variableNum = 0;

	scanf("%s", name);
	while (strcmp(name, "END") != 0){
		char assignStr[NAMELENGTH];
		strcpy(variableName[variableNum], name);
		scanf("%s", assignStr);
		assert(strcmp(assignStr, "=") == 0);
		scanf("%d", &(variableValue[variableNum]));
		variableNum++;
		scanf("%s", name);
	}

	/*read all inputs*/
	int code[LINE];
	int opd1[LINE], compopr[LINE], opd2[LINE], gotoLine[LINE]; /*IF*/
	int target[LINE]; /*PRINT uses target*/
	char first[NAMELENGTH];

	int lineNum = 1;

	while (scanf("%s", first) != EOF){
		char opd[NAMELENGTH], opr[NAMELENGTH];

		if (strcmp(first, "GOTO") == 0){
			code[lineNum] = GOTO;
			scanf("%d", &(gotoLine[lineNum]));
		}
		else if (strcmp(first, "STOP") == 0){
			code[lineNum] = STOP;
		}
		else if (strcmp(first, "IF") == 0){
			char gotoStr[NAMELENGTH];
			code[lineNum] = IF;
			scanf("%s", opd);
			opd1[lineNum] = nameToIndex(opd);
			scanf("%s", opr);
			compopr[lineNum] = oprToComp(opr);
			scanf("%s", opd);
			opd2[lineNum] = nameToIndex(opd);
			scanf("%s", gotoStr);
			assert(strcmp(gotoStr, "GOTO") == 0);
			scanf("%d", &(gotoLine[lineNum]));
		}
		else if (strcmp(first, "PRINT") == 0){
			code[lineNum] = PRINT;
			scanf("%s", opd);
			target[lineNum] = nameToIndex(opd);
		}
		else{     /*assignment*/
			code[lineNum] = ASSIGN;
			target[lineNum] = nameToIndex(first);
			char assignStr[NAMELENGTH];
			scanf("%s", assignStr);
			assert(strcmp(assignStr, "=") == 0);
			scanf("%s", opd);
			opd1[lineNum] = nameToIndex(opd);
			scanf("%s", opr);
			compopr[lineNum] = oprToComp(opr);
			scanf("%s", opd);
			opd2[lineNum] = nameToIndex(opd);
		}
		lineNum++;
	}

	/*execute commands*/

	int line = 1;
	int answer;
	int operand1;
	int operand2;

	while (code[line] != STOP){
		switch (code[line]){
			case IF:
				operand1 = variableValue[opd1[line]];
				operand2 = variableValue[opd2[line]];
				switch (compopr[line]){
					case EQL:
						answer = (operand1 == operand2);
						break;
					case NOTEQL:
						answer = (operand1 != operand2);
						break;
					case SMALLER:
						answer = (operand1 < operand2);
						break;
					case LARGER:
						answer = (operand1 > operand2);
						break;
					case SMALLEREQL:
						answer = (operand1 <= operand2);
						break;
					case LARGEREQL:
						answer = (operand1 >= operand2);
						break;
					default:
						printf("invalid comp %d\n", comopr[line]);
						exit(-1);
				}
				if (answer){
					line = gotoLine[line];
				}
				else {
					line++;
				}
				break;


			case GOTO:

		}
	}

	

}
