//Exo1

package tdm2;

import java.util.*;

import tdm1.*;

public class Exec{
    public static void main(String[] args)  {
        List<Client> lclient = DataSource.getDataSource().getClients();
        
//        // D�finition de l'ordre de tri 
//        GenericSorter<Client> cs = new GenericSorter<Client>();
//        cs.sortedBy(new ClientAge(),true); // Permet d'indiquer que le tri se fera ensuite par Nom , d�croissant
//        cs.sortedBy(new ClientNom(),false); // Permet d'indiquer que le tri se fera ensuite par prenom , croissant
//        cs.sortedBy(new ClientPrenom(),true);  // Permet d'indiquer que le tri se fera d'abord par Age , croissant 
//
//        cs.doSort(lclient);
//        for (Client client : lclient) {
//            System.out.println(client.age + " " + client.nom + " " + client.prenom);
//        }

        
//        //Exo2 : probl�me sur la m�thode sortedBy dans GenericSorter car Departement n'est pas Comparable        
//        // D�finition de l'ordre de tri
//    	GenericSorter<Client> cs = new GenericSorter<Client>();
//    	cs.sortedBy(new ClientDepartement(), true); // Permet d'indiquer que le tri se fera d'abord par Departement , croissant
//    	cs.sortedBy(new ClientNom(), true); // Permet d'indiquer que le tri se fera ensuite par Nom , d�croissant
//
//    	List<Client> clients = DataSource.getDataSource().getClients();
//    	cs.doSort(clients); // R�alise le tri de la liste clients
//
//    	for (Client client : clients)
//    	{
//    		System.out.println("Client " + client.nom + " " + client.prenom + " Age : " + client.age);
//    	}

    	//Exo5
       	List<Client> clients = DataSource.getDataSource().getClients();
       	GenericSorter2<Client> cs = new GenericSorter2<Client>();
        cs.init(clients).by(new ClientAge(), true).by(new ClientNom(), false).doIt();
    	for (Client client : clients)
    	{
    		System.out.println("Client " + client.nom + " " + client.prenom + " Age : " + client.age);
    	}
    	
    }
}