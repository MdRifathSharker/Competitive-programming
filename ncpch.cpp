import java.util.*;

public class Main {

    static class Date {
        int day, month, year;
        String dayName;

        Date(int day, int month, int year, String dayName) {
            this.day = day;
            this.month = month;
            this.year = year;
            this.dayName = dayName;
        }
    }

    static boolean isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    static int daysInMonth(int month, int year) {
        switch (month) {
            case 2:
                return isLeapYear(year) ? 29 : 28;
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
            default:
                return 31;
        }
    }

    static int getDayIndex(String dayName) {
        String[] daysOfWeek = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
        for (int i = 0; i < daysOfWeek.length; i++) {
            if (daysOfWeek[i].equals(dayName)) {
                return i;
            }
        }
        return -1;
    }

    static void printCalendar(Date date) {
        int[][] calendar = new int[5][7];
        int daysInMonth = daysInMonth(date.month, date.year);
        int dayIndex = getDayIndex(date.dayName);
        int currentDay = 1;

        for (int i = dayIndex; i < 7; i++) {
            calendar[0][i] = currentDay++;
        }
        for (int i = 1; i < 5; i++) {
            for (int j = 0; j < 7; j++) {
                if (currentDay <= daysInMonth) {
                    calendar[i][j] = currentDay++;
                }
            }
        }

        System.out.println("|---------------------------|");
        System.out.println("|Sun|Mon|Tue|Wed|Thu|Fri|Sat|");
        System.out.println("|---------------------------|");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 7; j++) {
                if (calendar[i][j] == 0) {
                    System.out.print("| - ");
                } else {
                    System.out.printf("| %2d", calendar[i][j]);
                }
            }
            System.out.println("|");
        }
        System.out.println("|---------------------------|");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        scanner.nextLine();
        for (int t = 1; t <= T; t++) {
            String[] input = scanner.nextLine().split(" ");
            String[] dateParts = input[0].split("/");
            int day = Integer.parseInt(dateParts[0]);
            int month = Integer.parseInt(dateParts[1]);
            int year = Integer.parseInt(dateParts[2]);
            String dayName = input[1];
            Date date = new Date(day, month, year, dayName);
            System.out.println("Case " + t + ":");
            printCalendar(date);
            System.out.println();
        }
        scanner.close();
    }
}