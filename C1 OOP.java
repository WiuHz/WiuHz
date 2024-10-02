//OOP Champions League
import java.util.*;
import java.util.io;
import java.util.Scanner;
import java.util.LinkedList;

interface Random{
    public void getTeam();
    public void getCountry();
}

public class Objects{
    int team;
    String[] Pot1;
    String[] Pot2;
    String[] Pot3;
    String[] Pot4;
}

public class Ballot implements Random{
    private String team;
    private String country;
    private int potNumber;

    public Random(String team, String country, int potNumber){
        this.team = team;
        this.country = country;
        this.potNumber = 0;
    }

    public String setTeam(String team){
        return team;
    }

    public void getTeam(){
        this.team = team;
    }

    public String setCountry(String country){
        return country;
    }

    public void getCountry(){
        this.country = country;
    }
    
    public void CheckPotNumber(){
        if(potNumber != 1 || potNumber != 2 || potNumber != 3 || potNumber != 4){
            System.out.println("This team get out of the Qualify!");
            return;
        }
        else{
            return;
        }
    }

    public void CheckSizeOfArray(){
        if(Pot1.size() != Pot2.size()){
            System.out.println("System error!");
        }
        else if(Pot2.size() != Pot3.size()){
            System.out.println("System error!");
        }
        else if(Pot3.size() != Pot4.size()){
            System.out.println("System error!");
        }
        else{
            System.out.println("System error");
        }
    }
}

public class Main{
    public static void main(String[] args){
        Objects team = new Objects();
        ArrayListed<String> Pot1 = new ArrayListed();
        ArrayListed<String> Pot2 = new ArrayListed();
        ArrayListed<String> Pot3 = new ArrayListed();
        ArrayListed<String> Pot4 = new ArrayListed();
        Pot1.CheckSizeOfArray();
        Pot2.CheckSizeOfArray();
        Pot3.CheckSizeOfArray();
        Pot4.CheckSizeOfArray();
        Scanner footballClub = new Scanner();
        while(footballClub.nextLine()){
            System.out.print("Choose your team: ");
            footballClub.CheckPotNumber();
            System.out.println("Choose the position for your team: ");
            if(team.pot == 1){
                Pot1.add(team);
                System.out.println(team, team.country, "1");
                System.out.println(Pot1);
            }
            else if(team.pot == 2){
                Pot2.add(team);
                System.out.println(team, team.country, "2");
                System.out.println(Pot2);
            }
            else if(team.pot == 3){
                Pot3.add(team);
                System.out.println(team, team.country, "3");
                System.out.println(Pot3);

            }
            else if(team.pot == 4){
                Pot4.add(team);
                System.out.println(team, team.country, "4")
                System.out.println(Pot4);
            }
            else{
                System.out.println("This team doesn't existed!");
            }
        }
    }
}
