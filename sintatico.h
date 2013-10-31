/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEIRO = 258,
     REAL = 259,
     NUMERO_REAL = 260,
     CARACTERE = 261,
     ATRIBUICAO = 262,
     DIFERENTE = 263,
     IDENTIFICADOR = 264,
     MAIS = 265,
     MENOS = 266,
     ASTERISCO = 267,
     BARRA = 268,
     POTENCIA = 269,
     FIM_LINHA = 270,
     TABULACAO = 271,
     E = 272,
     OU = 273,
     MAIS_ATRIBUICAO = 274,
     MENOS_ATRIBUICAO = 275,
     ASTERISCO_ATRIBUICAO = 276,
     BARRA_ATRIBUICAO = 277,
     MENOR = 278,
     MAIOR = 279,
     MAIOR_IGUAL = 280,
     MENOR_IGUAL = 281,
     IGUAL = 282,
     EXCLAMACAO = 283,
     COMENTARIO = 284,
     FRASE_COMENTARIO = 285,
     E_COMERCIAL = 286,
     BARRA_VERTICAL = 287,
     DOIS_PONTOS = 288,
     PONTO_E_VIRGULA = 289,
     VIRGULA = 290,
     CHAVE_ESQUERDA = 291,
     CHAVE_DIREITA = 292,
     COLCHETE_ESQUERDO = 293,
     COLCHETE_DIREITO = 294,
     PARENTESIS_ESQUERDO = 295,
     PARENTESIS_DIREITO = 296,
     INCLUA = 297,
     PRINCIPAL = 298,
     DEFINA = 299,
     LEIA = 300,
     ESCREVA = 301,
     SE = 302,
     SENAO = 303,
     PARA = 304,
     DE = 305,
     ATE = 306,
     FACA = 307,
     PASSO = 308,
     PARE = 309,
     ENQUANTO = 310,
     REPITA = 311,
     RETORNE = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


