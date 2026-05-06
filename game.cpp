#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    
    srand(time(NULL));

    string nomeJogador = "";   
    int vida    = 3;           
    int forca   = 10;          
    int sorte   = 5;           
    int ouro    = 0;           

    int opcao       = 0;       
    int jogadas     = 0;       
    int capitulo    = 1;       
    int jogar       = 1;       
    int menuLoop    = 1;       
    int capLoop     = 1;       
    int vivo        = 1;       

    while (menuLoop == 1) {

        
        system("cls");
        cout << "========================================" << endl;
        cout << "   A FUNÇÃO MALDITA" << endl;
        cout << "========================================" << endl;
        cout << "  1 - Iniciar Jogo" << endl;
        cout << "  2 - Regras" << endl;
        cout << "  3 - Sobre" << endl;
        cout << "  4 - Sair" << endl;
        cout << "========================================" << endl;
        cout << "Escolha uma opcao: ";
        cin  >> opcao;

        while (opcao < 1 || opcao > 4) {
            cout << "Opcao invalida! Digite entre 1 e 4: ";
            cin  >> opcao;
        }

        if (opcao == 2) {
            system("cls");
            cout << "======== REGRAS ========" << endl;
            cout << "- A cada decisao seus atributos serao afetados." << endl;
            cout << "- Se Vida = 0, voce morre e volta ao menu." << endl;
            cout << "- Acumule Ouro e sobreviva para vencer!" << endl;
            cout << "========================" << endl;
            system("pause");
        }

        else if (opcao == 3) {
            system("cls");
            cout << "======== SOBRE ========" << endl;
            cout << "Instituicao : UNIVALI" << endl;
            cout << "Curso       : Ciencia da Computacao" << endl;
            cout << "Disciplina  : Algoritmos e Programacao" << endl;
            cout << "Professor   : Crístina Ono Horita" << endl;
            cout << "Desenvolvedores:" << endl;
            cout << "   - Samuel Baron" << endl;
            cout << "   - Raphael Kotzias" << endl;
            cout << "========================" << endl;
            system("pause");
        }

        else if (opcao == 4) {
            cout << "Encerrando o jogo. Ate logo!" << endl;
            menuLoop = 0; 
        }


        else if (opcao == 1) {

            
            vida    = 3;
            forca   = 10;
            sorte   = 5;
            ouro    = 0;
            jogadas = 0;
            capitulo = 1;
            vivo    = 1;

            
            system("cls");
            cout << "Digite seu nome, aventureiro: ";
            cin  >> nomeJogador;

            cout << "\nBem-vindo, " << nomeJogador << "!" << endl;
            cout << "Sua jornada pela Função Maldita comeca agora..." << endl;
            cout << "\nAtributos iniciais:" << endl;
            cout << "  Vida:  " << vida  << endl;
            cout << "  Forca: " << forca << endl;
            cout << "  Sorte: " << sorte << endl;
            cout << "  Ouro:  " << ouro  << endl;
            system("pause");

            
            
            
            while (capitulo <= 10 && vivo == 1) {

                system("cls");
                capLoop = 1; 
   
                if (capitulo == 1) {
                    cout << "=== CAPITULO 1: A Entrada da Floresta ===" << endl;
                    cout << nomeJogador << " chega diante de uma floresta escura." << endl;
                    cout << "Dois caminhos se abrem a sua frente." << endl;
                    cout << "1 - Seguir pela trilha iluminada" << endl;
                    cout << "2 - Entrar pela passagem sombria" << endl;
                    cout << "Escolha: ";
                    cin  >> opcao;
      
                    while (opcao < 1 || opcao > 2) {
                        cout << "Opcao invalida! Digite 1 ou 2: ";
                        cin  >> opcao;
                    }

                    if (opcao == 1) {
                        
                        cout << "\nVoce segue pela trilha. Encontra uma bolsa de moedas!" << endl;
                        ouro  += 5;
                        sorte += 1;
                        cout << "[+5 Ouro] [+1 Sorte]" << endl;
                    }
                    else {
                        
                        cout << "\nA passagem sombria te assusta. Voce tropeça e perde energia." << endl;
                        vida  -= 1;
                        forca -= 1;
                        cout << "[-1 Vida] [-1 Forca]" << endl;
                    }

                    jogadas++;
                    capitulo++;
                }

                
                
                
                else if (capitulo == 2) {
                    cout << "=== CAPITULO 2: O Riacho Encantado ===" << endl;
                    cout << "Voce encontra um riacho cristalino bloqueando o caminho." << endl;
                    cout << "1 - Beber a agua do riacho" << endl;
                    cout << "2 - Atravessar pulando nas pedras" << endl;
                    cout << "3 - Procurar uma ponte" << endl;
                    cout << "Escolha: ";
                    cin  >> opcao;

                    while (opcao < 1 || opcao > 3) {
                        cout << "Opcao invalida! Digite 1, 2 ou 3: ";
                        cin  >> opcao;
                    }

                    if (opcao == 1) {
                        cout << "\nA agua e magica! Voce se sente revigorado." << endl;
                        vida  += 1;
                        sorte += 2;
                        cout << "[+1 Vida] [+2 Sorte]" << endl;
                    }
                    else if (opcao == 2) {
                        cout << "\nVoce escorrega em uma pedra mas atravessa." << endl;
                        vida  -= 1;
                        forca += 1;
                        cout << "[-1 Vida] [+1 Forca]" << endl;
                    }
                    else {
                        cout << "\nVoce acha uma ponte e no caminho encontra 3 moedas." << endl;
                        ouro  += 3;
                        cout << "[+3 Ouro]" << endl;
                    }

                    jogadas++;
                    capitulo++;
                }

                
                
                
                else if (capitulo == 3) {
                    cout << "=== CAPITULO 3: A Cabana Abandonada ===" << endl;
                    cout << "Uma cabana misteriosa aparece entre as arvores." << endl;
                    cout << "1 - Entrar na cabana" << endl;
                    cout << "2 - Ignorar e continuar" << endl;
                    cout << "Escolha: ";
                    cin  >> opcao;

                    while (opcao < 1 || opcao > 2) {
                        cout << "Opcao invalida! Digite 1 ou 2: ";
                        cin  >> opcao;
                    }

                    if (opcao == 1) {
                        cout << "\nDentro ha um bau com ouro e uma armadilha!" << endl;
                        ouro  += 10;
                        vida  -= 1;
                        cout << "[+10 Ouro] [-1 Vida]" << endl;
                    }
                    else {
                        cout << "\nVoce evita a armadilha e encontra ervas medicinais." << endl;
                        forca += 2;
                        cout << "[+2 Forca]" << endl;
                    }

                    jogadas++;
                    capitulo++;
                }

                
                
                
                else if (capitulo == 4) {
                    cout << "=== CAPITULO 4: O Mercador Misterioso ===" << endl;
                    cout << "Um mercador encapuzado oferece itens estranhos." << endl;
                    cout << "Voce tem " << ouro << " de ouro." << endl;
                    cout << "1 - Comprar pocao de forca (custa 5 ouro, +3 Forca)" << endl;
                    cout << "2 - Comprar amuleto da sorte (custa 5 ouro, +3 Sorte)" << endl;
                    cout << "3 - Nao comprar nada" << endl;
                    cout << "Escolha: ";
                    cin  >> opcao;

                    while (opcao < 1 || opcao > 3) {
                        cout << "Opcao invalida! Digite 1, 2 ou 3: ";
                        cin  >> opcao;
                    }

                    if (opcao == 1) {
                        if (ouro >= 5) {
                            ouro  -= 5;
                            forca += 3;
                            cout << "\nVoce comprou a pocao! [-5 Ouro] [+3 Forca]" << endl;
                        }
                        else {
                            cout << "\nOuro insuficiente! O mercador ri de voce." << endl;
                            sorte -= 1;
                            cout << "[-1 Sorte]" << endl;
                        }
                    }
                    else if (opcao == 2) {
                        if (ouro >= 5) {
                            ouro  -= 5;
                            sorte += 3;
                            cout << "\nVoce comprou o amuleto! [-5 Ouro] [+3 Sorte]" << endl;
                        }
                        else {
                            cout << "\nOuro insuficiente! O mercador desaparece." << endl;
                        }
                    }
                    else {
                        cout << "\nVoce recusa. O mercador some na neblina." << endl;
                    }

                    jogadas++;
                    capitulo++;
                }

                
                
                
                else if (capitulo == 5) {
                    cout << "=== CAPITULO 5: A Aranha Gigante ===" << endl;
                    cout << "Uma aranha colossal bloqueia o caminho!" << endl;
                    cout << "1 - Lutar com a aranha (usa Forca)" << endl;
                    cout << "2 - Fugir pelo mato (usa Sorte)" << endl;
                    cout << "Escolha: ";
                    cin  >> opcao;

                    while (opcao < 1 || opcao > 2) {
                        cout << "Opcao invalida! Digite 1 ou 2: ";
                        cin  >> opcao;
                    }

                    if (opcao == 1) {
                        
                        if (forca >= 8) {
                            cout << "\nSua forca e grande! Voce derrota a aranha e encontra seu tesouro." << endl;
                            ouro  += 15;
                            forca -= 2;
                            cout << "[+15 Ouro] [-2 Forca]" << endl;
                        }
                        else {
                            cout << "\nSua forca nao e suficiente. A aranha te fere!" << endl;
                            vida  -= 1;
                            forca -= 1;
                            cout << "[-1 Vida] [-1 Forca]" << endl;
                        }
                    }
                    else {
                        if (sorte >= 5) {
                            cout << "\nSua sorte te salva! Voce foge sem um arranhao." << endl;
                            sorte -= 1;
                            cout << "[-1 Sorte]" << endl;
                        }
                        else {
                            cout << "\nSem sorte, a aranha te alcança!" << endl;
                            vida  -= 1;
                            cout << "[-1 Vida]" << endl;
                        }
                    }

                    jogadas++;
                    capitulo++;
                }

                
                
                
                else if (capitulo == 6) {
                    cout << "=== CAPITULO 6: O Cemiterio Encantado ===" << endl;
                    cout << "Voce entra num cemiterio coberto de nevoa." << endl;
                    cout << "1 - Ler as inscricoes nas lapides" << endl;
                    cout << "2 - Correr pelo cemiterio" << endl;
                    cout << "3 - Rezar antes de passar" << endl;
                    cout << "Escolha: ";
                    cin  >> opcao;

                    while (opcao < 1 || opcao > 3) {
                        cout << "Opcao invalida! Digite 1, 2 ou 3: ";
                        cin  >> opcao;
                    }

                    if (opcao == 1) {
                        cout << "\nAs inscricoes revelam um segredo! Voce aprende uma tecnica." << endl;
                        forca += 3;
                        sorte += 1;
                        cout << "[+3 Forca] [+1 Sorte]" << endl;
                    }
                    else if (opcao == 2) {
                        cout << "\nVoce desperta os espiritos ao correr!" << endl;
                        vida  -= 1;
                        cout << "[-1 Vida]" << endl;
                    }
                    else {
                        cout << "\nA oração acalma os espiritos e eles te guiam." << endl;
                        sorte += 3;
                        ouro  += 5;
                        cout << "[+3 Sorte] [+5 Ouro]" << endl;
                    }

                    jogadas++;
                    capitulo++;
                }

                
                
                
                else if (capitulo == 7) {
                    cout << "=== CAPITULO 7: O Dragao Adormecido ===" << endl;
                    cout << "Um enorme dragao dorme sobre uma pilha de ouro!" << endl;
                    cout << "1 - Tentar roubar o ouro silenciosamente" << endl;
                    cout << "2 - Desviar e continuar" << endl;
                    cout << "Escolha: ";
                    cin  >> opcao;

                    while (opcao < 1 || opcao > 2) {
                        cout << "Opcao invalida! Digite 1 ou 2: ";
                        cin  >> opcao;
                    }

                    if (opcao == 1) {
                        
                        if (sorte >= 6) {
                            cout << "\nSua sorte e incrivel! Voce pega o ouro sem acordar o dragao." << endl;
                            ouro  += 20;
                            cout << "[+20 Ouro]" << endl;
                        }
                        else {
                            cout << "\nO dragao acorda e te chamusca!" << endl;
                            vida  -= 1;
                            forca -= 2;
                            cout << "[-1 Vida] [-2 Forca]" << endl;
                        }
                    }
                    else {
                        cout << "\nVoce passa com cuidado. Prudencia e sabedoria." << endl;
                        sorte += 2;
                        cout << "[+2 Sorte]" << endl;
                    }

                    jogadas++;
                    capitulo++;
                }

                
                
                
                else if (capitulo == 8) {
                    cout << "=== CAPITULO 8: O Labirinto das Ilusoes ===" << endl;
                    cout << "Voce entra num labirinto de espelhos que confundem a mente." << endl;
                    cout << "1 - Seguir sua intuicao" << endl;
                    cout << "2 - Marcar as paredes para nao se perder" << endl;
                    cout << "3 - Gritar por ajuda" << endl;
                    cout << "Escolha: ";
                    cin  >> opcao;

                    while (opcao < 1 || opcao > 3) {
                        cout << "Opcao invalida! Digite 1, 2 ou 3: ";
                        cin  >> opcao;
                    }

                    if (opcao == 1) {
                        if (sorte >= 7) {
                            cout << "\nSua intuicao funciona! Voce sai rapidamente." << endl;
                            ouro  += 8;
                            cout << "[+8 Ouro]" << endl;
                        }
                        else {
                            cout << "\nVoce se perde e esgota suas forcas." << endl;
                            forca -= 3;
                            cout << "[-3 Forca]" << endl;
                        }
                    }
                    else if (opcao == 2) {
                        cout << "\nMetodico e eficiente! Voce sai sem dificuldades." << endl;
                        forca += 1;
                        sorte += 1;
                        cout << "[+1 Forca] [+1 Sorte]" << endl;
                    }
                    else {
                        cout << "\nUm eco estranho responde e te guia ate a saida." << endl;
                        sorte += 2;
                        vida  += 1;
                        cout << "[+2 Sorte] [+1 Vida]" << endl;
                    }

                    jogadas++;
                    capitulo++;
                }

                
                
                
                else if (capitulo == 9) {
                    cout << "=== CAPITULO 9: A Torre do Feiticeiro ===" << endl;
                    cout << "Uma torre imponente emerge das arvores. O Feiticeiro Maldito mora aqui." << endl;
                    cout << "1 - Subir e enfrentar o feiticeiro" << endl;
                    cout << "2 - Oferecer ouro em troca de passagem" << endl;
                    cout << "Escolha: ";
                    cin  >> opcao;

                    while (opcao < 1 || opcao > 2) {
                        cout << "Opcao invalida! Digite 1 ou 2: ";
                        cin  >> opcao;
                    }

                    if (opcao == 1) {
                        if (forca >= 12) {
                            cout << "\nSua forca impressiona o feiticeiro! Ele foge e deixa seu grimorio." << endl;
                            forca += 5;
                            sorte += 3;
                            ouro  += 10;
                            cout << "[+5 Forca] [+3 Sorte] [+10 Ouro]" << endl;
                        }
                        else {
                            cout << "\nO feiticeiro e poderoso demais! Voce recua ferido." << endl;
                            vida  -= 1;
                            forca -= 2;
                            cout << "[-1 Vida] [-2 Forca]" << endl;
                        }
                    }
                    else {
                        if (ouro >= 10) {
                            ouro -= 10;
                            cout << "\nO feiticeiro aceita e revela o caminho secreto." << endl;
                            sorte += 5;
                            cout << "[-10 Ouro] [+5 Sorte]" << endl;
                        }
                        else {
                            cout << "\nVoce nao tem ouro suficiente! O feiticeiro te lanca uma maldição." << endl;
                            sorte -= 3;
                            vida  -= 1;
                            cout << "[-3 Sorte] [-1 Vida]" << endl;
                        }
                    }

                    jogadas++;
                    capitulo++;
                }

                
                
                
                else if (capitulo == 10) {
                    cout << "=== CAPITULO 10: O Coracao da Floresta ===" << endl;
                    cout << "Voce chega ao centro da Floresta Maldita." << endl;
                    cout << "Uma pedra brilhante flutua no ar. E o Cristal da Cura!" << endl;
                    cout << "1 - Pegar o cristal e encerrar a maldicao" << endl;
                    cout << "2 - Deixar o cristal e sair vitorioso sem disturbar" << endl;
                    cout << "Escolha: ";
                    cin  >> opcao;

                    while (opcao < 1 || opcao > 2) {
                        cout << "Opcao invalida! Digite 1 ou 2: ";
                        cin  >> opcao;
                    }

                    if (opcao == 1) {
                        cout << "\nVoce pega o cristal! A floresta treme e a maldicao e quebrada!" << endl;
                        ouro  += 30;
                        forca += 5;
                        sorte += 5;
                        cout << "[+30 Ouro] [+5 Forca] [+5 Sorte]" << endl;
                    }
                    else {
                        cout << "\nVoce respeita a floresta. A natureza te abençoa generosamente!" << endl;
                        vida  += 2;
                        ouro  += 20;
                        sorte += 10;
                        cout << "[+2 Vida] [+20 Ouro] [+10 Sorte]" << endl;
                    }

                    jogadas++;
                    capitulo++; 
                }

                if (vida <= 0) {
                    system("cls");
                    cout << "========================================" << endl;
                    cout << "   VOCE MORREU, " << nomeJogador << "!" << endl;
                    cout << "========================================" << endl;
                    cout << "Suas vidas chegaram a zero." << endl;
                    cout << "\n--- RESUMO FINAL ---" << endl;
                    cout << "Capitulos completados: " << capitulo - 1 << endl;
                    cout << "Forca final: " << forca << endl;
                    cout << "Sorte final: " << sorte << endl;
                    cout << "Ouro final:  " << ouro  << endl;
                    cout << "====================================" << endl;
                    vivo = 0; 
                    system("pause");
                }
                else {
                    
                    cout << "\n--- STATUS ATUAL ---" << endl;
                    cout << "Vida:  " << vida  << endl;
                    cout << "Forca: " << forca << endl;
                    cout << "Sorte: " << sorte << endl;
                    cout << "Ouro:  " << ouro  << endl;
                    cout << "--------------------" << endl;
                    system("pause");
                }

            } 

            
            
            
            if (vivo == 1 && capitulo > 10) {
                system("cls");
                cout << "========================================" << endl;
                cout << "   PARABENS, " << nomeJogador << "!" << endl;
                cout << "   VOCE VENCEU A FLORESTA MALDITA!" << endl;
                cout << "========================================" << endl;

                
                if (ouro >= 50 && forca >= 15) {
                    cout << "Resultado: LENDARIO! Heroi completo!" << endl;
                }
                else if (ouro >= 30) {
                    cout << "Resultado: VITORIOSO! Rico e corajoso!" << endl;
                }
                else {
                    cout << "Resultado: SOBREVIVENTE! Voce saiu vivo!" << endl;
                }

                cout << "\n--- RESUMO FINAL ---" << endl;
                cout << "Jogador: " << nomeJogador << endl;
                cout << "Vida:    " << vida  << endl;
                cout << "Forca:   " << forca << endl;
                cout << "Sorte:   " << sorte << endl;
                cout << "Ouro:    " << ouro  << endl;
                cout << "====================================" << endl;
                system("pause");
            }

        } 

    } 

    return 0;
}