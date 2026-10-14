#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
 * Detect Love — an interactive console program.
 * This program is for reflection and fun; it cannot actually detect
 * another person's feelings. Honest communication and consent matter.
 */

static void clear_input(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        /* Discard the rest of the input line. */
    }
}

static char ask_yes_no(const char *question)
{
    char answer;

    for (;;) {
        printf("%s (y/n): ", question);
        if (scanf(" %c", &answer) != 1) {
            return 'n';
        }
        clear_input();
        answer = (char)tolower((unsigned char)answer);

        if (answer == 'y' || answer == 'n') {
            return answer;
        }
        printf("Please enter y for yes or n for no.\n");
    }
}

static void show_love_check(void)
{
    char your_feelings;
    char their_feelings;

    printf("\n--- LOVE CHECK-IN ---\n");
    printf("A few questions to reflect on your connection.\n\n");
    your_feelings = ask_yes_no("Do you have romantic feelings for this person?");
    their_feelings = ask_yes_no("Have they clearly told you they feel the same way?");

    printf("\nYour check-in:\n");
    if (your_feelings == 'y' && their_feelings == 'y') {
        printf("💕 That sounds promising! Keep building the connection with honesty, respect, and good communication.\n");
    } else if (your_feelings == 'y' && their_feelings == 'n') {
        printf("💗 It can hurt when feelings aren't returned. Be kind to yourself and respect their answer and boundaries.\n");
    } else if (your_feelings == 'n' && their_feelings == 'y') {
        printf("🌷 Someone may care for you, but you don't owe them romantic feelings. Be honest and gentle about your boundaries.\n");
    } else {
        printf("🌱 It may be too early to know, and that's okay. Take your time instead of forcing an answer.\n");
    }

    printf("\nRemember: this program cannot read minds or prove love. A respectful conversation is the best way to understand each other.\n");
}

static void show_emotion_menu(void)
{
    int choice;

    printf("\n--- HOW ARE YOU FEELING? ---\n");
    printf("Choose the feeling closest to yours today:\n");
    printf(" 1. Happy       2. In love      3. Hopeful\n");
    printf(" 4. Excited     5. Grateful     6. Missing someone\n");
    printf(" 7. Nervous     8. Confused     9. Sad\n");
    printf("10. Lonely     11. Heartbroken 12. Peaceful\n");
    printf("13. Overwhelmed 14. Unsure\n");
    printf("Your choice (1-14): ");

    if (scanf("%d", &choice) != 1) {
        clear_input();
        printf("\nNo worries. Whatever you're feeling, give yourself time and kindness.\n");
        return;
    }
    clear_input();

    switch (choice) {
        case 1:
            printf("\n☀️ HAPPY: Let yourself enjoy this moment. You don't have to earn every smile.\n");
            break;
        case 2:
            printf("\n🥰 IN LOVE: Enjoy the warmth while making room for honesty, respect, and the other person's feelings.\n");
            break;
        case 3:
            printf("\n🌈 HOPEFUL: You can feel hopeful without knowing exactly how things will turn out. Take one kind step at a time.\n");
            break;
        case 4:
            printf("\n✨ EXCITED: Enjoy the butterflies, and let the connection unfold at a pace that feels right for both of you.\n");
            break;
        case 5:
            printf("\n🌻 GRATEFUL: Notice the good things. A sincere thank-you can mean more than a grand gesture.\n");
            break;
        case 6:
            printf("\n💌 MISSING SOMEONE: You can miss someone and still care for yourself today. If appropriate, send a gentle hello without expecting a reply.\n");
            break;
        case 7:
            printf("\n🦋 NERVOUS: Take a slow breath. You can be nervous and brave at the same time. You don't need to solve everything today.\n");
            break;
        case 8:
            printf("\n🌫️ CONFUSED: Give yourself time to notice what you feel and what you need. You don't have to label everything immediately.\n");
            break;
        case 9:
            printf("\n🌧️ SAD: Be gentle with yourself. Consider talking to someone you trust or doing one small comforting thing.\n");
            break;
        case 10:
            printf("\n🌙 LONELY: Feeling lonely doesn't mean you're unlovable. Reach out to someone safe if you can.\n");
            break;
        case 11:
            printf("\n💔 HEARTBROKEN: You don't have to heal on anyone else's timeline. Lean on trusted people and give yourself space.\n");
            break;
        case 12:
            printf("\n🍃 PEACEFUL: A calm connection can be meaningful, too. You don't need drama to prove that something matters.\n");
            break;
        case 13:
            printf("\n🫶 OVERWHELMED: Pause. Take one breath and one next step. It's okay to ask someone you trust for support.\n");
            break;
        case 14:
            printf("\n🌱 UNSURE: “I don't know yet” is a valid answer. Take your time and let your feelings become clearer naturally.\n");
            break;
        default:
            printf("\nThat choice isn't on the list. Whatever you're feeling, it deserves patience and kindness.\n");
            break;
    }
}

static void write_love_note(void)
{
    char recipient[80];
    char sender[80];
    char appreciation[200];

    printf("\n--- WRITE A LITTLE LOVE NOTE ---\n");
    printf("Their name: ");
    if (fgets(recipient, sizeof recipient, stdin) == NULL) return;
    recipient[strcspn(recipient, "\n")] = '\0';

    printf("Your name: ");
    if (fgets(sender, sizeof sender, stdin) == NULL) return;
    sender[strcspn(sender, "\n")] = '\0';

    printf("One thing you appreciate about them: ");
    if (fgets(appreciation, sizeof appreciation, stdin) == NULL) return;
    appreciation[strcspn(appreciation, "\n")] = '\0';

    if (recipient[0] == '\0') strcpy(recipient, "someone special");
    if (sender[0] == '\0') strcpy(sender, "someone who cares");
    if (appreciation[0] == '\0') strcpy(appreciation, "I appreciate the person you are.");

    printf("\n----------------------------------------\n");
    printf("Dear %s,\n\n", recipient);
    printf("I wanted to remind you that you matter to me.\n");
    printf("%s\n\n", appreciation);
    printf("Thank you for being you.\n\nWith warmth,\n%s <3\n", sender);
    printf("----------------------------------------\n");
    printf("Make this note your own before sharing it.\n");
}

int main(void)
{
    int choice;

    printf("\n");
    printf("       @@@@      @@@@\n");
    printf("     @@@@@@@@  @@@@@@@@\n");
    printf("    @@@@@@@@@@@@@@@@@@@\n");
    printf("    @@@@  DETECT LOVE @@@\n");
    printf("     @@@@@@@@@@@@@@@@@@\n");
    printf("       @@@@@@@@@@@@@@\n");
    printf("         @@@@@@@@@@\n");
    printf("           @@@@@@\n");
    printf("        ahsan shuvo\n");
    printf("\n");
    printf("Welcome to Detect Love — a little program for big feelings.\n");

    for (;;) {
        printf("\n========== MAIN MENU ==========\n");
        printf("1. Love check-in\n");
        printf("2. Explore my emotions\n");
        printf("3. Write a little love note\n");
        printf("4. A random kind reminder\n");
        printf("0. Exit\n");
        printf("Choose an option: ");

        if (scanf("%d", &choice) != 1) {
            clear_input();
            printf("Please enter a number from 0 to 4.\n");
            continue;
        }
        clear_input();

        switch (choice) {
            case 1:
                show_love_check();
                break;
            case 2:
                show_emotion_menu();
                break;
            case 3:
                write_love_note();
                break;
            case 4: {
                static const char *reminders[] = {
                    "You deserve care that comes with respect.",
                    "Your worth is not decided by one person's answer.",
                    "You can set boundaries and still be kind.",
                    "Real connection makes room for honest communication.",
                    "You are allowed to take your time."
                };
                static unsigned int next = 2U;
                next = (next * 1103515245U + 12345U) % 5U;
                printf("\n♥ A reminder for you: %s ♥\n", reminders[next]);
                break;
            }
            case 0:
                printf("\nTake care of your heart. Thanks for visiting! <3\n");
                return 0;
            default:
                printf("Please choose one of the listed options.\n");
                break;
        }
    }
}
