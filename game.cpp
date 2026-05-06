/*
=======================================================================
  AVENTURA NA FLORESTA MALDITA
  Trabalho Prático - Algoritmos e Programação - UNIVALI
  Profª Cristina Ono Horita
=======================================================================
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    // === SEMENTE ALEATÓRIA ===
    srand(time(NULL));

    // =====================================================
    // VARIÁVEIS DE ESTADO DO PERSONAGEM
    // =====================================================
    string nomeJogador = "";   // Nome do jogador
    int vida    = 3;           // Quantidade de vidas
    int forca   = 10;          // Força do personagem
    int sorte   = 5;           // Sorte do personagem
    int ouro    = 0;           // Ouro acumulado

    // Variáveis auxiliares
    int opcao       = 0;       // Opção do menu / escolha do jogador
    int jogadas     = 0;       // Contador de jogadas (desafio a cada 5)
    int dado        = 0;       // Resultado do dado (1-6)
    int capitulo    = 1;       // Capítulo atual (1 a 10)
    int jogar       = 1;       // Controle do loop principal (1=sim, 0=não)
    int menuLoop    = 1;       // Controle do loop do menu
    int capLoop     = 1;       // Controle do loop dentro de cada capítulo
    int vivo        = 1;       // 1 = vivo, 0 = morreu

    // =====================================================
    // LOOP PRINCIPAL DO MENU
    // =====================================================
    while (menuLoop == 1) {

        // --- EXIBIÇÃO DO MENU ---
        system("cls");
        cout << "========================================" << endl;
        cout << "   AVENTURA NA FLORESTA MALDITA" << endl;
        cout << "========================================" << endl;
        cout << "  1 - Iniciar Jogo" << endl;
        cout << "  2 - Regras" << endl;
        cout << "  3 - Sobre" << endl;
        cout << "  4 - Sair" << endl;
        cout << "========================================" << endl;
        cout << "Escolha uma opcao: ";
        cin  >> opcao;

        // --- VALIDAÇÃO DA ENTRADA DO MENU ---
        while (opcao < 1 || opcao > 4) {
            cout << "Opcao invalida! Digite entre 1 e 4: ";
            cin  >> opcao;
        }

        // ---- REGRAS ----
        if (opcao == 2) {
            system("cls");
            cout << "======== REGRAS ========" << endl;
            cout << "- Voce ira percorrer 10 capitulos na Floresta Maldita." << endl;
            cout << "- A cada decisao seus atributos serao afetados." << endl;
            cout << "- A cada 5 jogadas um DESAFIO aparece (dado aleatorio)." << endl;
            cout << "- Se Vida = 0, voce morre e volta ao menu." << endl;
            cout << "- Acumule Ouro e sobreviva para vencer!" << endl;
            cout << "========================" << endl;
            system("pause");
        }

        // ---- SOBRE ----
        else if (opcao == 3) {
            system("cls");
            cout << "======== SOBRE ========" << endl;
            cout << "Instituicao : UNIVALI" << endl;
            cout << "Curso       : Ciencia da Computacao" << endl;
            cout << "Disciplina  : Algoritmos e Programacao" << endl;
            cout << "Professor   : Crístina Ono Horita" << endl;
            cout << "Desenvolvedores:" << endl;
            cout << "   - Aluno 1" << endl;
            cout << "   - Aluno 2" << endl;
            cout << "   - Aluno 3" << endl;
            cout << "========================" << endl;
            system("pause");
        }

        // ---- SAIR ----
        else if (opcao == 4) {
            cout << "Encerrando o jogo. Ate logo!" << endl;
            menuLoop = 0; // Encerra o loop do menu (e o programa)
        }

        // ====================================================
        // ---- INICIAR JOGO ----
        // ====================================================
        else if (opcao == 1) {

            // --- Reset dos atributos a cada nova partida ---
            vida    = 3;
            forca   = 10;
            sorte   = 5;
            ouro    = 0;
            jogadas = 0;
            capitulo = 1;
            vivo    = 1;

            // --- Solicita o nome do jogador ---
            system("cls");
            cout << "Digite seu nome, aventureiro: ";
            cin  >> nomeJogador;

            cout << "\nBem-vindo, " << nomeJogador << "!" << endl;
            cout << "Sua jornada pela Floresta Maldita comeca agora..." << endl;
            cout << "\nAtributos iniciais:" << endl;
            cout << "  Vida:  " << vida  << endl;
            cout << "  Forca: " << forca << endl;
            cout << "  Sorte: " << sorte << endl;
            cout << "  Ouro:  " << ouro  << endl;
            system("pause");

            // ====================================================
            // GAME LOOP - percorre os capítulos enquanto vivo
            // ====================================================
            while (capitulo <= 10 && vivo == 1) {

                system("cls");
                capLoop = 1; // reseta controle do capítulo

                // ============================================
                // CAPÍTULO 1 - Entrada da Floresta
                // ============================================
                if (capitulo == 1) {
                    cout << "=== CAPITULO 1: A Entrada da Floresta ===" << endl;
                    cout << nomeJogador << " chega diante de uma floresta escura." << endl;
                    cout << "Dois caminhos se abrem a sua frente." << endl;
                    cout << "1 - Seguir pela trilha iluminada" << endl;
                    cout << "2 - Entrar pela passagem sombria" << endl;
                    cout << "Escolha: ";
                    cin  >> opcao;

                    // Validação
                    while (opcao < 1 || opcao > 2) {
                        cout << "Opcao invalida! Digite 1 ou 2: ";
                        cin  >> opcao;
                    }

                    if (opcao == 1) {
                        // Caminho da trilha iluminada
                        cout << "\nVoce segue pela trilha. Encontra uma bolsa de moedas!" << endl;
                        ouro  += 5;
                        sorte += 1;
                        cout << "[+5 Ouro] [+1 Sorte]" << endl;
                    }
                    else {
                        // Caminho sombrio
                        cout << "\nA passagem sombria te assusta. Voce tropeça e perde energia." << endl;
                        vida  -= 1;
                        forca -= 1;
                        cout << "[-1 Vida] [-1 Forca]" << endl;
                    }

                    jogadas++;
                    capitulo++;
                }

                // ============================================
                // CAPÍTULO 2 - O Riacho Encantado
                // ============================================
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

                // ============================================
                // CAPÍTULO 3 - A Cabana Abandonada
                // ============================================
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

                // ============================================
                // CAPÍTULO 4 - O Mercador Misterioso
                // ============================================
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

                // ============================================
                // CAPÍTULO 5 - A Armadilha da Aranha Gigante
                // ============================================
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
                        // Luta baseada na forca
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

                // ============================================
                // CAPÍTULO 6 - O Cemitério Encantado
                // ============================================
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

                // ============================================
                // CAPÍTULO 7 - O Dragão Adormecido
                // ============================================
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
                        // Resultado baseado em sorte
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

                // ============================================
                // CAPÍTULO 8 - O Labirinto das Ilusões
                // ============================================
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

                // ============================================
                // CAPÍTULO 9 - A Torre do Feiticeiro
                // ============================================
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

                // ============================================
                // CAPÍTULO 10 - O Coração da Floresta (FINAL)
                // ============================================
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
                    capitulo++; // Passa de 10, encerrando o while
                }

                // ============================================
                // VERIFICAÇÃO DE DESAFIO (a cada 5 jogadas)
                // ============================================
                if (jogadas % 5 == 0 && jogadas > 0) {
                    dado = (rand() % 6) + 1; // Gera número entre 1 e 6

                    system("cls");
                    cout << "\n!!! DESAFIO ESPECIAL !!!" << endl;
                    cout << "Um dado magico e lancado..." << endl;
                    cout << "Resultado do dado: " << dado << endl;

                    // Regras do desafio com o dado
                    if (dado == 1) {
                        cout << "AZARAO! Voce perde uma vida!" << endl;
                        vida -= 1;
                        cout << "[-1 Vida]" << endl;
                    }
                    else if (dado == 2) {
                        cout << "Fraco... Perde forca." << endl;
                        forca -= 2;
                        cout << "[-2 Forca]" << endl;
                    }
                    else if (dado == 3) {
                        cout << "Neutro. Nada acontece dessa vez." << endl;
                    }
                    else if (dado == 4) {
                        cout << "Sorte boa! Ganha ouro." << endl;
                        ouro += 8;
                        cout << "[+8 Ouro]" << endl;
                    }
                    else if (dado == 5) {
                        cout << "Grande fortuna! Forca e sorte aumentam." << endl;
                        forca += 3;
                        sorte += 3;
                        cout << "[+3 Forca] [+3 Sorte]" << endl;
                    }
                    else if (dado == 6) {
                        cout << "JACKPOT! O dado trouxe grande riqueza!" << endl;
                        ouro  += 20;
                        forca += 5;
                        vida  += 1;
                        cout << "[+20 Ouro] [+5 Forca] [+1 Vida]" << endl;
                    }

                    system("pause");
                }

                // ============================================
                // VERIFICAÇÃO DE MORTE
                // ============================================
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
                    vivo = 0; // Encerra o game loop
                    system("pause");
                }
                else {
                    // Exibe status após cada capítulo
                    cout << "\n--- STATUS ATUAL ---" << endl;
                    cout << "Vida:  " << vida  << endl;
                    cout << "Forca: " << forca << endl;
                    cout << "Sorte: " << sorte << endl;
                    cout << "Ouro:  " << ouro  << endl;
                    cout << "--------------------" << endl;
                    system("pause");
                }

            } // fim do while dos capítulos

            // ====================================================
            // TELA FINAL (Vitória) - se passou todos os capítulos
            // ====================================================
            if (vivo == 1 && capitulo > 10) {
                system("cls");
                cout << "========================================" << endl;
                cout << "   PARABENS, " << nomeJogador << "!" << endl;
                cout << "   VOCE VENCEU A FLORESTA MALDITA!" << endl;
                cout << "========================================" << endl;

                // Mensagem de vitória baseada nos atributos
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

        } // fim do if opcao == 1 (jogar)

    } // fim do while do menu

    return 0;
}