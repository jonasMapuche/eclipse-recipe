/*
 ============================================================================
 Name        : molecula.c
 Author      : jonasMapuche
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : C, Ansi-style
 Question    : What is the best computing language for encoding chemical
               formulas
 Goal        : Analyse five computing language (C, Java, PL/pgSQL, Java
               Script e Dart) to see which best encodes chemical formulas
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tabelaPeriodica [10][20][4][4];
char vetorPauling [20][3][3];
char vetorPaulingSort [20][3][3];
char tabelaSubniveis [16][1][3];

void carregaTabela(void) {
	int linha, coluna, comparacao;
	strcpy(tabelaPeriodica [1][1][0], "H");
	strcpy(tabelaPeriodica [1][1][1], "1");
	strcpy(tabelaPeriodica [1][1][2], "G");
	strcpy(tabelaPeriodica [1][1][3], "H");
	strcpy(tabelaPeriodica [1][18][0], "He");
	strcpy(tabelaPeriodica [1][18][1], "2");
	strcpy(tabelaPeriodica [1][18][2], "G");
	strcpy(tabelaPeriodica [1][18][3], "G");
	strcpy(tabelaPeriodica [2][1][0], "Li");
	strcpy(tabelaPeriodica [2][1][1], "3");
	strcpy(tabelaPeriodica [2][1][2], "S");
	strcpy(tabelaPeriodica [2][1][3], "M");
	strcpy(tabelaPeriodica [2][2][0], "Be");
	strcpy(tabelaPeriodica [2][2][1], "4");
	strcpy(tabelaPeriodica [2][2][2], "S");
	strcpy(tabelaPeriodica [2][2][3], "M");
	strcpy(tabelaPeriodica [2][13][0], "B");
	strcpy(tabelaPeriodica [2][13][1], "5");
	strcpy(tabelaPeriodica [2][13][2], "S");
	strcpy(tabelaPeriodica [2][13][3], "M");
	strcpy(tabelaPeriodica [2][14][0], "C");
	strcpy(tabelaPeriodica [2][14][1], "6");
	strcpy(tabelaPeriodica [2][14][2], "A");
	strcpy(tabelaPeriodica [2][14][3], "M");
	strcpy(tabelaPeriodica [2][15][0], "N");
	strcpy(tabelaPeriodica [2][15][1], "7");
	strcpy(tabelaPeriodica [2][15][2], "A");
	strcpy(tabelaPeriodica [2][15][3], "G");
	strcpy(tabelaPeriodica [2][16][0], "O");
	strcpy(tabelaPeriodica [2][16][1], "8");
	strcpy(tabelaPeriodica [2][16][2], "A");
	strcpy(tabelaPeriodica [2][16][3], "G");
	strcpy(tabelaPeriodica [2][17][0], "F");
	strcpy(tabelaPeriodica [2][17][1], "9");
	strcpy(tabelaPeriodica [2][17][2], "A");
	strcpy(tabelaPeriodica [2][17][3], "G");
	strcpy(tabelaPeriodica [2][18][0], "Ne");
	strcpy(tabelaPeriodica [2][18][1], "10");
	strcpy(tabelaPeriodica [2][18][2], "G");
	strcpy(tabelaPeriodica [2][18][3], "G");
	strcpy(tabelaPeriodica [3][1][0], "Na");
	strcpy(tabelaPeriodica [3][1][1], "11");
	strcpy(tabelaPeriodica [3][1][2], "S");
	strcpy(tabelaPeriodica [3][1][3], "M");
	strcpy(tabelaPeriodica [3][2][0], "Mg");
	strcpy(tabelaPeriodica [3][2][1], "12");
	strcpy(tabelaPeriodica [3][2][2], "S");
	strcpy(tabelaPeriodica [3][2][3], "M");
	strcpy(tabelaPeriodica [3][13][0], "Al");
	strcpy(tabelaPeriodica [3][13][1], "13");
	strcpy(tabelaPeriodica [3][13][2], "M");
	strcpy(tabelaPeriodica [3][13][3], "M");
	strcpy(tabelaPeriodica [3][14][0], "Si");
	strcpy(tabelaPeriodica [3][14][1], "14");
	strcpy(tabelaPeriodica [3][14][2], "M");
	strcpy(tabelaPeriodica [3][14][3], "S");
	strcpy(tabelaPeriodica [3][15][0], "P");
	strcpy(tabelaPeriodica [3][15][1], "15");
	strcpy(tabelaPeriodica [3][15][2], "M");
	strcpy(tabelaPeriodica [3][15][3], "A");
	strcpy(tabelaPeriodica [3][16][0], "S");
	strcpy(tabelaPeriodica [3][16][1], "16");
	strcpy(tabelaPeriodica [3][16][2], "M");
	strcpy(tabelaPeriodica [3][16][3], "A");
	strcpy(tabelaPeriodica [3][17][0], "Cl");
	strcpy(tabelaPeriodica [3][17][1], "17");
	strcpy(tabelaPeriodica [3][17][2], "G");
	strcpy(tabelaPeriodica [3][17][3], "A");
	strcpy(tabelaPeriodica [3][18][0], "Ar");
	strcpy(tabelaPeriodica [3][18][1], "18");
	strcpy(tabelaPeriodica [3][18][2], "G");
	strcpy(tabelaPeriodica [3][18][3], "G");
	strcpy(tabelaPeriodica [4][1][0], "K");
	strcpy(tabelaPeriodica [4][1][1], "19");
	strcpy(tabelaPeriodica [4][1][2], "S");
	strcpy(tabelaPeriodica [4][1][3], "M");
	strcpy(tabelaPeriodica [4][2][0], "Ca");
	strcpy(tabelaPeriodica [4][2][1], "20");
	strcpy(tabelaPeriodica [4][2][2], "S");
	strcpy(tabelaPeriodica [4][2][3], "M");
	strcpy(tabelaPeriodica [4][3][0], "Sc");
	strcpy(tabelaPeriodica [4][3][1], "21");
	strcpy(tabelaPeriodica [4][3][2], "M");
	strcpy(tabelaPeriodica [4][3][3], "M");
	strcpy(tabelaPeriodica [4][4][0], "Ti");
	strcpy(tabelaPeriodica [4][4][1], "22");
	strcpy(tabelaPeriodica [4][4][2], "M");
	strcpy(tabelaPeriodica [4][4][3], "M");
	strcpy(tabelaPeriodica [4][5][0], "V");
	strcpy(tabelaPeriodica [4][5][1], "23");
	strcpy(tabelaPeriodica [4][5][2], "M");
	strcpy(tabelaPeriodica [4][5][3], "M");
	strcpy(tabelaPeriodica [4][6][0], "Cr");
	strcpy(tabelaPeriodica [4][6][1], "24");
	strcpy(tabelaPeriodica [4][6][2], "M");
	strcpy(tabelaPeriodica [4][6][3], "M");
	strcpy(tabelaPeriodica [4][7][0], "Mn");
	strcpy(tabelaPeriodica [4][7][1], "25");
	strcpy(tabelaPeriodica [4][7][2], "M");
	strcpy(tabelaPeriodica [4][7][3], "M");
	strcpy(tabelaPeriodica [4][8][0], "Fe");
	strcpy(tabelaPeriodica [4][8][1], "26");
	strcpy(tabelaPeriodica [4][8][2], "M");
	strcpy(tabelaPeriodica [4][8][3], "M");
	strcpy(tabelaPeriodica [4][9][0], "Co");
	strcpy(tabelaPeriodica [4][9][1], "27");
	strcpy(tabelaPeriodica [4][9][2], "M");
	strcpy(tabelaPeriodica [4][9][3], "M");
	strcpy(tabelaPeriodica [4][10][0], "Ni");
	strcpy(tabelaPeriodica [4][10][1], "28");
	strcpy(tabelaPeriodica [4][10][2], "M");
	strcpy(tabelaPeriodica [4][10][3], "M");
	strcpy(tabelaPeriodica [4][11][0], "Cu");
	strcpy(tabelaPeriodica [4][11][1], "29");
	strcpy(tabelaPeriodica [4][11][2], "M");
	strcpy(tabelaPeriodica [4][11][3], "M");
	strcpy(tabelaPeriodica [4][12][0], "Zn");
	strcpy(tabelaPeriodica [4][12][1], "30");
	strcpy(tabelaPeriodica [4][12][2], "M");
	strcpy(tabelaPeriodica [4][12][3], "M");
	strcpy(tabelaPeriodica [4][13][0], "Ga");
	strcpy(tabelaPeriodica [4][13][1], "31");
	strcpy(tabelaPeriodica [4][13][2], "M");
	strcpy(tabelaPeriodica [4][13][3], "M");
	strcpy(tabelaPeriodica [4][14][0], "Ge");
	strcpy(tabelaPeriodica [4][14][1], "32");
	strcpy(tabelaPeriodica [4][14][2], "M");
	strcpy(tabelaPeriodica [4][14][3], "S");
	strcpy(tabelaPeriodica [4][15][0], "As");
	strcpy(tabelaPeriodica [4][15][1], "33");
	strcpy(tabelaPeriodica [4][15][2], "M");
	strcpy(tabelaPeriodica [4][15][3], "S");
	strcpy(tabelaPeriodica [4][16][0], "Se");
	strcpy(tabelaPeriodica [4][16][1], "34");
	strcpy(tabelaPeriodica [4][16][2], "M");
	strcpy(tabelaPeriodica [4][16][3], "A");
	strcpy(tabelaPeriodica [4][17][0], "Br");
	strcpy(tabelaPeriodica [4][17][1], "35");
	strcpy(tabelaPeriodica [4][17][2], "L");
	strcpy(tabelaPeriodica [4][17][3], "A");
	strcpy(tabelaPeriodica [4][18][0], "Kr");
	strcpy(tabelaPeriodica [4][18][1], "36");
	strcpy(tabelaPeriodica [4][18][2], "G");
	strcpy(tabelaPeriodica [4][18][3], "M");
	strcpy(tabelaPeriodica [5][1][0], "Rb");
	strcpy(tabelaPeriodica [5][1][1], "37");
	strcpy(tabelaPeriodica [5][1][2], "M");
	strcpy(tabelaPeriodica [5][1][3], "M");
	strcpy(tabelaPeriodica [5][2][0], "Sr");
	strcpy(tabelaPeriodica [5][2][1], "38");
	strcpy(tabelaPeriodica [5][2][2], "M");
	strcpy(tabelaPeriodica [5][2][3], "M");
	strcpy(tabelaPeriodica [5][3][0], "Y");
	strcpy(tabelaPeriodica [5][3][1], "39");
	strcpy(tabelaPeriodica [5][3][2], "M");
	strcpy(tabelaPeriodica [5][3][3], "M");
	strcpy(tabelaPeriodica [5][4][0], "Zr");
	strcpy(tabelaPeriodica [5][4][1], "40");
	strcpy(tabelaPeriodica [5][4][2], "M");
	strcpy(tabelaPeriodica [5][4][3], "M");
	strcpy(tabelaPeriodica [5][5][0], "Nb");
	strcpy(tabelaPeriodica [5][5][1], "41");
	strcpy(tabelaPeriodica [5][5][2], "M");
	strcpy(tabelaPeriodica [5][5][3], "M");
	strcpy(tabelaPeriodica [5][6][0], "Mo");
	strcpy(tabelaPeriodica [5][6][1], "42");
	strcpy(tabelaPeriodica [5][6][2], "M");
	strcpy(tabelaPeriodica [5][6][3], "M");
	strcpy(tabelaPeriodica [5][7][0], "Tc");
	strcpy(tabelaPeriodica [5][7][1], "43");
	strcpy(tabelaPeriodica [5][7][2], "M");
	strcpy(tabelaPeriodica [5][7][3], "M");
	strcpy(tabelaPeriodica [5][8][0], "Ru");
	strcpy(tabelaPeriodica [5][8][1], "44");
	strcpy(tabelaPeriodica [5][8][2], "M");
	strcpy(tabelaPeriodica [5][8][3], "M");
	strcpy(tabelaPeriodica [5][9][0], "Rh");
	strcpy(tabelaPeriodica [5][9][1], "45");
	strcpy(tabelaPeriodica [5][9][2], "M");
	strcpy(tabelaPeriodica [5][9][3], "M");
	strcpy(tabelaPeriodica [5][10][0], "Pd");
	strcpy(tabelaPeriodica [5][10][1], "46");
	strcpy(tabelaPeriodica [5][10][2], "M");
	strcpy(tabelaPeriodica [5][10][3], "M");
	strcpy(tabelaPeriodica [5][11][0], "Ag");
	strcpy(tabelaPeriodica [5][11][1], "47");
	strcpy(tabelaPeriodica [5][11][2], "M");
	strcpy(tabelaPeriodica [5][11][3], "M");
	strcpy(tabelaPeriodica [5][12][0], "Cd");
	strcpy(tabelaPeriodica [5][12][1], "48");
	strcpy(tabelaPeriodica [5][12][2], "M");
	strcpy(tabelaPeriodica [5][12][3], "M");
	strcpy(tabelaPeriodica [5][13][0], "In");
	strcpy(tabelaPeriodica [5][13][1], "49");
	strcpy(tabelaPeriodica [5][13][2], "M");
	strcpy(tabelaPeriodica [5][13][3], "M");
	strcpy(tabelaPeriodica [5][14][0], "Sn");
	strcpy(tabelaPeriodica [5][14][1], "50");
	strcpy(tabelaPeriodica [5][14][2], "M");
	strcpy(tabelaPeriodica [5][14][3], "M");
	strcpy(tabelaPeriodica [5][15][0], "Sb");
	strcpy(tabelaPeriodica [5][15][1], "51");
	strcpy(tabelaPeriodica [5][15][2], "M");
	strcpy(tabelaPeriodica [5][15][3], "S");
	strcpy(tabelaPeriodica [5][16][0], "Te");
	strcpy(tabelaPeriodica [5][16][1], "52");
	strcpy(tabelaPeriodica [5][16][2], "M");
	strcpy(tabelaPeriodica [5][16][3], "S");
	strcpy(tabelaPeriodica [5][17][0], "I");
	strcpy(tabelaPeriodica [5][17][1], "53");
	strcpy(tabelaPeriodica [5][17][2], "M");
	strcpy(tabelaPeriodica [5][17][3], "A");
	strcpy(tabelaPeriodica [5][18][0], "Xe");
	strcpy(tabelaPeriodica [5][18][1], "54");
	strcpy(tabelaPeriodica [5][18][2], "G");
	strcpy(tabelaPeriodica [5][18][3], "G");
	strcpy(tabelaPeriodica [6][1][0], "Cs");
	strcpy(tabelaPeriodica [6][1][1], "55");
	strcpy(tabelaPeriodica [6][1][2], "M");
	strcpy(tabelaPeriodica [6][1][3], "M");
	strcpy(tabelaPeriodica [6][2][0], "Ba");
	strcpy(tabelaPeriodica [6][2][1], "56");
	strcpy(tabelaPeriodica [6][2][2], "M");
	strcpy(tabelaPeriodica [6][2][3], "M");
	strcpy(tabelaPeriodica [6][3][0], "La");
	strcpy(tabelaPeriodica [6][3][1], "57");
	strcpy(tabelaPeriodica [6][3][2], "M");
	strcpy(tabelaPeriodica [6][3][3], "M");
	strcpy(tabelaPeriodica [6][4][0], "Hf");
	strcpy(tabelaPeriodica [6][4][1], "72");
	strcpy(tabelaPeriodica [6][4][2], "M");
	strcpy(tabelaPeriodica [6][4][3], "M");
	strcpy(tabelaPeriodica [6][5][0], "Ta");
	strcpy(tabelaPeriodica [6][5][1], "73");
	strcpy(tabelaPeriodica [6][5][2], "M");
	strcpy(tabelaPeriodica [6][5][3], "M");
	strcpy(tabelaPeriodica [6][6][0], "W");
	strcpy(tabelaPeriodica [6][6][1], "74");
	strcpy(tabelaPeriodica [6][6][2], "M");
	strcpy(tabelaPeriodica [6][6][3], "M");
	strcpy(tabelaPeriodica [6][7][0], "Re");
	strcpy(tabelaPeriodica [6][7][1], "75");
	strcpy(tabelaPeriodica [6][7][2], "M");
	strcpy(tabelaPeriodica [6][7][3], "M");
	strcpy(tabelaPeriodica [6][8][0], "Os");
	strcpy(tabelaPeriodica [6][8][1], "76");
	strcpy(tabelaPeriodica [6][8][2], "M");
	strcpy(tabelaPeriodica [6][8][3], "M");
	strcpy(tabelaPeriodica [6][9][0], "Ir");
	strcpy(tabelaPeriodica [6][9][1], "77");
	strcpy(tabelaPeriodica [6][9][2], "M");
	strcpy(tabelaPeriodica [6][9][3], "M");
	strcpy(tabelaPeriodica [6][10][0], "Pt");
	strcpy(tabelaPeriodica [6][10][1], "78");
	strcpy(tabelaPeriodica [6][10][2], "M");
	strcpy(tabelaPeriodica [6][10][3], "M");
	strcpy(tabelaPeriodica [6][11][0], "Au");
	strcpy(tabelaPeriodica [6][11][1], "79");
	strcpy(tabelaPeriodica [6][11][2], "M");
	strcpy(tabelaPeriodica [6][11][3], "M");
	strcpy(tabelaPeriodica [6][12][0], "Hg");
	strcpy(tabelaPeriodica [6][12][1], "80");
	strcpy(tabelaPeriodica [6][12][2], "L");
	strcpy(tabelaPeriodica [6][12][3], "M");
	strcpy(tabelaPeriodica [6][13][0], "Tl");
	strcpy(tabelaPeriodica [6][13][1], "81");
	strcpy(tabelaPeriodica [6][13][2], "M");
	strcpy(tabelaPeriodica [6][13][3], "M");
	strcpy(tabelaPeriodica [6][14][0], "Pb");
	strcpy(tabelaPeriodica [6][14][1], "82");
	strcpy(tabelaPeriodica [6][14][2], "M");
	strcpy(tabelaPeriodica [6][14][3], "M");
	strcpy(tabelaPeriodica [6][15][0], "Bi");
	strcpy(tabelaPeriodica [6][15][1], "83");
	strcpy(tabelaPeriodica [6][15][2], "M");
	strcpy(tabelaPeriodica [6][15][3], "M");
	strcpy(tabelaPeriodica [6][16][0], "Po");
	strcpy(tabelaPeriodica [6][16][1], "84");
	strcpy(tabelaPeriodica [6][16][2], "M");
	strcpy(tabelaPeriodica [6][16][3], "S");
	strcpy(tabelaPeriodica [6][17][0], "At");
	strcpy(tabelaPeriodica [6][17][1], "85");
	strcpy(tabelaPeriodica [6][17][2], "M");
	strcpy(tabelaPeriodica [6][17][3], "A");
	strcpy(tabelaPeriodica [6][18][0], "Rn");
	strcpy(tabelaPeriodica [6][18][1], "86");
	strcpy(tabelaPeriodica [6][18][2], "G");
	strcpy(tabelaPeriodica [6][18][3], "G");
	strcpy(tabelaPeriodica [7][1][0], "Fr");
	strcpy(tabelaPeriodica [7][1][1], "87");
	strcpy(tabelaPeriodica [7][1][2], "M");
	strcpy(tabelaPeriodica [7][1][3], "M");
	strcpy(tabelaPeriodica [7][2][0], "Ra");
	strcpy(tabelaPeriodica [7][2][1], "88");
	strcpy(tabelaPeriodica [7][2][2], "M");
	strcpy(tabelaPeriodica [7][2][3], "M");
	strcpy(tabelaPeriodica [7][3][0], "Ac");
	strcpy(tabelaPeriodica [7][3][1], "89");
	strcpy(tabelaPeriodica [7][3][2], "M");
	strcpy(tabelaPeriodica [7][3][3], "M");
	strcpy(tabelaPeriodica [7][4][0], "Rf");
	strcpy(tabelaPeriodica [7][4][1], "104");
	strcpy(tabelaPeriodica [7][4][2], "M");
	strcpy(tabelaPeriodica [7][4][3], "M");
	strcpy(tabelaPeriodica [7][5][0], "Db");
	strcpy(tabelaPeriodica [7][5][1], "105");
	strcpy(tabelaPeriodica [7][5][2], "M");
	strcpy(tabelaPeriodica [7][5][3], "M");
	strcpy(tabelaPeriodica [7][6][0], "Sg");
	strcpy(tabelaPeriodica [7][6][1], "106");
	strcpy(tabelaPeriodica [7][6][2], "M");
	strcpy(tabelaPeriodica [7][6][3], "M");
	strcpy(tabelaPeriodica [7][7][0], "Bh");
	strcpy(tabelaPeriodica [7][7][1], "107");
	strcpy(tabelaPeriodica [7][7][2], "M");
	strcpy(tabelaPeriodica [7][7][3], "M");
	strcpy(tabelaPeriodica [7][8][0], "Hs");
	strcpy(tabelaPeriodica [7][8][1], "108");
	strcpy(tabelaPeriodica [7][8][2], "M");
	strcpy(tabelaPeriodica [7][8][3], "M");
	strcpy(tabelaPeriodica [7][9][0], "Mt");
	strcpy(tabelaPeriodica [7][9][1], "109");
	strcpy(tabelaPeriodica [7][9][2], "M");
	strcpy(tabelaPeriodica [7][9][3], "M");
	strcpy(tabelaPeriodica [7][10][0], "Ds");
	strcpy(tabelaPeriodica [7][10][1], "110");
	strcpy(tabelaPeriodica [7][10][2], "M");
	strcpy(tabelaPeriodica [7][10][3], "M");
	strcpy(tabelaPeriodica [7][11][0], "Rg");
	strcpy(tabelaPeriodica [7][11][1], "111");
	strcpy(tabelaPeriodica [7][11][2], "M");
	strcpy(tabelaPeriodica [7][11][3], "M");
	strcpy(tabelaPeriodica [7][12][0], "Uub");
	strcpy(tabelaPeriodica [7][12][1], "112");
	strcpy(tabelaPeriodica [7][12][2], "M");
	strcpy(tabelaPeriodica [7][12][3], "M");
	strcpy(tabelaPeriodica [7][13][0], "Uut");
	strcpy(tabelaPeriodica [7][13][1], "113");
	strcpy(tabelaPeriodica [7][13][2], "X");
	strcpy(tabelaPeriodica [7][13][3], "X");
	strcpy(tabelaPeriodica [7][14][0], "Uuq");
	strcpy(tabelaPeriodica [7][14][1], "114");
	strcpy(tabelaPeriodica [7][14][2], "M");
	strcpy(tabelaPeriodica [7][14][3], "M");
	strcpy(tabelaPeriodica [7][15][0], "Uup");
	strcpy(tabelaPeriodica [7][15][1], "115");
	strcpy(tabelaPeriodica [7][15][2], "X");
	strcpy(tabelaPeriodica [7][15][3], "X");
	strcpy(tabelaPeriodica [7][16][0], "Uuh");
	strcpy(tabelaPeriodica [7][16][1], "116");
	strcpy(tabelaPeriodica [7][16][2], "M");
	strcpy(tabelaPeriodica [7][16][3], "S");
	strcpy(tabelaPeriodica [7][17][0], "Uus");
	strcpy(tabelaPeriodica [7][17][1], "117");
	strcpy(tabelaPeriodica [7][17][2], "X");
	strcpy(tabelaPeriodica [7][17][3], "X");
	strcpy(tabelaPeriodica [7][18][0], "Uuo");
	strcpy(tabelaPeriodica [7][18][1], "118");
	strcpy(tabelaPeriodica [7][18][2], "G");
	strcpy(tabelaPeriodica [7][18][3], "X");
	for(linha = 0; linha < 8; linha++) {
		for(coluna = 0; coluna < 19; coluna++) {
			comparacao = strncmp(tabelaPeriodica [linha][coluna][0], "", 3);
			if(comparacao != 0) {
				printf("Phase & Family [%d] [%d] = %s | Z = %s | State = %s | Tabulation = %s\n", linha, coluna, tabelaPeriodica [linha][coluna][0], tabelaPeriodica [linha][coluna][1], tabelaPeriodica [linha][coluna][2], tabelaPeriodica [linha][coluna][3]);
			}
		}
		coluna = 0;
	}
}

void carregaVetor(void) {
	int linha;
	strcpy(vetorPauling [0][0], "1s");
	strcpy(vetorPauling [0][1], "2");
	strcpy(vetorPauling [1][0], "2s");
	strcpy(vetorPauling [1][1], "2");
	strcpy(vetorPauling [2][0], "2p");
	strcpy(vetorPauling [2][1], "6");
	strcpy(vetorPauling [3][0], "3s");
	strcpy(vetorPauling [3][1], "2");
	strcpy(vetorPauling [4][0], "3p");
	strcpy(vetorPauling [4][1], "6");
	strcpy(vetorPauling [5][0], "4s");
	strcpy(vetorPauling [5][1], "2");
	strcpy(vetorPauling [6][0], "3d");
	strcpy(vetorPauling [6][1], "10");
	strcpy(vetorPauling [7][0], "4p");
	strcpy(vetorPauling [7][1], "6");
	strcpy(vetorPauling [8][0], "5s");
	strcpy(vetorPauling [8][1], "2");
	strcpy(vetorPauling [9][0], "4d");
	strcpy(vetorPauling [9][1], "10");
	strcpy(vetorPauling [10][0], "5p");
	strcpy(vetorPauling [10][1], "6");
	strcpy(vetorPauling [11][0], "6s");
	strcpy(vetorPauling [11][1], "2");
	strcpy(vetorPauling [12][0], "4f");
	strcpy(vetorPauling [12][1], "14");
	strcpy(vetorPauling [13][0], "5d");
	strcpy(vetorPauling [13][1], "10");
	strcpy(vetorPauling [14][0], "6p");
	strcpy(vetorPauling [14][1], "6");
	strcpy(vetorPauling [15][0], "7s");
	strcpy(vetorPauling [15][1], "2");
	strcpy(vetorPauling [16][0], "5f");
	strcpy(vetorPauling [16][1], "14");
	strcpy(vetorPauling [17][0], "6d");
	strcpy(vetorPauling [17][1], "10");
	strcpy(vetorPauling [18][0], "7p");
	strcpy(vetorPauling [18][1], "6");
	for(linha = 0; linha < 19; linha++) {
		printf("e- Delivery [%d] = %s | Level -e = %s\n", linha + 1, vetorPauling [linha][0], vetorPauling [linha][1]);
	}
}

void carregaVetorSort(void) {
	int linha;
	strcpy(vetorPaulingSort [0][0], "1s");
	strcpy(vetorPaulingSort [0][1], "2");
	strcpy(vetorPaulingSort [1][0], "2s");
	strcpy(vetorPaulingSort [1][1], "2");
	strcpy(vetorPaulingSort [2][0], "2p");
	strcpy(vetorPaulingSort [2][1], "6");
	strcpy(vetorPaulingSort [3][0], "3s");
	strcpy(vetorPaulingSort [3][1], "2");
	strcpy(vetorPaulingSort [4][0], "3p");
	strcpy(vetorPaulingSort [4][1], "6");
	strcpy(vetorPaulingSort [5][0], "3d");
	strcpy(vetorPaulingSort [5][1], "10");
	strcpy(vetorPaulingSort [6][0], "4s");
	strcpy(vetorPaulingSort [6][1], "2");
	strcpy(vetorPaulingSort [7][0], "4p");
	strcpy(vetorPaulingSort [7][1], "6");
	strcpy(vetorPaulingSort [8][0], "4d");
	strcpy(vetorPaulingSort [8][1], "10");
	strcpy(vetorPaulingSort [9][0], "4f");
	strcpy(vetorPaulingSort [9][1], "14");
	strcpy(vetorPaulingSort [10][0], "5s");
	strcpy(vetorPaulingSort [10][1], "2");
	strcpy(vetorPaulingSort [11][0], "5p");
	strcpy(vetorPaulingSort [11][1], "6");
	strcpy(vetorPaulingSort [12][0], "5d");
	strcpy(vetorPaulingSort [12][1], "10");
	strcpy(vetorPaulingSort [13][0], "5f");
	strcpy(vetorPaulingSort [13][1], "14");
	strcpy(vetorPaulingSort [14][0], "6s");
	strcpy(vetorPaulingSort [14][1], "2");
	strcpy(vetorPaulingSort [15][0], "6p");
	strcpy(vetorPaulingSort [15][1], "6");
	strcpy(vetorPaulingSort [16][0], "6d");
	strcpy(vetorPaulingSort [16][1], "10");
	strcpy(vetorPaulingSort [17][0], "7s");
	strcpy(vetorPaulingSort [17][1], "2");
	strcpy(vetorPaulingSort [18][0], "7p");
	strcpy(vetorPaulingSort [18][1], "6");
	for(linha = 0; linha < 19; linha++) {
		printf("Sorting e- Delivery [%d] = %s | Level -e = %s\n", linha + 1, vetorPaulingSort [linha][0], vetorPaulingSort [linha][1]);
	}
}

void carregaSubniveis(void) {
	int linha;
	strcpy(tabelaSubniveis [1][0], "1");
	strcpy(tabelaSubniveis [2][0], "2");
	strcpy(tabelaSubniveis [3][0], "3");
	strcpy(tabelaSubniveis [4][0], "4");
	strcpy(tabelaSubniveis [5][0], "5");
	strcpy(tabelaSubniveis [6][0], "6");
	strcpy(tabelaSubniveis [7][0], "7");
	strcpy(tabelaSubniveis [8][0], "8");
	strcpy(tabelaSubniveis [9][0], "9");
	strcpy(tabelaSubniveis [10][0], "10");
	strcpy(tabelaSubniveis [11][0], "11");
	strcpy(tabelaSubniveis [12][0], "12");
	strcpy(tabelaSubniveis [13][0], "13");
	strcpy(tabelaSubniveis [14][0], "14");
	for(linha = 1; linha < 15; linha++) {
		printf("Level e- [%d] = %s\n", linha, tabelaSubniveis [linha][0]);
	}
}

/*
char itoc(int Z) {
	char retorno[1][3];
	switch (Z) {
		case 1:
			strcpy(retorno[0], "1");
			break;
		case 2:
			strcpy(retorno[0], "2");
			break;
		case 3:
			strcpy(retorno[0], "3");
			break;
		case 4:
			strcpy(retorno[0], "4");
			break;
		case 5:
			strcpy(retorno[0], "5");
			break;
		case 6:
			strcpy(retorno[0], "6");
			break;
		case 7:
			strcpy(retorno[0], "7");
			break;
		case 8:
			strcpy(retorno[0], "8");
			break;
		case 9:
			strcpy(retorno[0], "9");
			break;
		case 10:
			strcpy(retorno[0], "10");
			break;
		case 11:
			strcpy(retorno[0], "11");
			break;
		case 12:
			strcpy(retorno[0], "12");
			break;
		case 13:
			strcpy(retorno[0], "13");
			break;
		case 14:
			strcpy(retorno[0], "14");
			break;
	}
	return retorno[1][3];
}
*/

void mostrarEletronsSort(void) {
	int linha, coluna, linhaS, comparacao;
	linha = 5;
	coluna = 11;
	printf("State & Family [%d] [%d] = %s | Z = %s | State = %s | Tabulation = %s | ", linha, coluna, tabelaPeriodica [linha][coluna][0], tabelaPeriodica [linha][coluna][1], tabelaPeriodica [linha][coluna][2], tabelaPeriodica [linha][coluna][3]);
	for(linha = 0; linha < 19; linha++) {
		for(linhaS = 0; linhaS < 19; linhaS++) {
			comparacao = strncmp(vetorPauling [linha][0], vetorPaulingSort [linhaS][0], 3);
			if(comparacao == 0) {
				strcpy(vetorPaulingSort [linhaS][2], vetorPauling [linha][2]);
			}
		}
	}
	for(linha = 0; linha < 19; linha++) {
		comparacao = strncmp(vetorPaulingSort [linha][2], "", 3);
		if(comparacao != 0) {
			printf("[%s]%s ", vetorPaulingSort [linha][0], vetorPaulingSort [linha][2]);
		}
	}
	printf("\n");
}

void mostrarEletrons(void) {
	int linha, coluna, Z;
	linha = 5;
	coluna = 11;
	Z = atoi(tabelaPeriodica [linha][coluna][1]);
	printf("State & Family [%d] [%d] = %s | Z = %s | State = %s | Tabulation = %s | ", linha, coluna, tabelaPeriodica [linha][coluna][0], tabelaPeriodica [linha][coluna][1], tabelaPeriodica [linha][coluna][2], tabelaPeriodica [linha][coluna][3]);
	for(linha = 0; linha < 19; linha++) {
		Z = Z - atoi(vetorPauling [linha][1]);
		if(Z < 0) {
			strcpy(vetorPauling [linha][2], tabelaSubniveis [(Z + atoi(vetorPauling [linha][1]))][0]);
			printf("[%s]%s ", vetorPauling [linha][0], vetorPauling [linha][2]);
			break;
		} else {
			strcpy(vetorPauling [linha][2], tabelaSubniveis [atoi(vetorPauling [linha][1])][0]);
			printf("[%s]%s ", vetorPauling [linha][0], vetorPauling [linha][2]);
		}
	}
	printf("\n");
}


int main(void) {
	puts("!!!------------------------!!!"); /* prints !!!Hello World!!! */
	carregaTabela();
	carregaSubniveis();
	carregaVetor();
	mostrarEletrons();
	carregaVetorSort();
	mostrarEletronsSort();
	puts("!!!------------------------!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

