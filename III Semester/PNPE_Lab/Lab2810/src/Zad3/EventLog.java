package Zad3;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.List;

public class EventLog {
	private static final int MAX_EVENTS = 100;
	private List<String> events;

	public EventLog(){
		this.events = new ArrayList<>();
	}

	public void addEvent(String event) throws EventLogListFull{
		if(events.size() < MAX_EVENTS){
			events.add(event);
		}else{
			throw new EventLogListFull("Events list is full");
		}
	}

	public String getEvent(int index) throws IndexOutOfBoundsException{
		if(index >= 0 && index < events.size()){
			return events.get(index);
		}else{
			throw new IndexOutOfBoundsException(index + " not found.");
		}
	}

	public void print(){
		for(String event : events){
			System.out.println(event);
		}
	}

	public void updateEvent(int index, Scanner scanner) {
		try {
			String temp = scanner.nextLine();
			events.set(index, temp);
		} catch(IndexOutOfBoundsException e){
			System.err.println("Invalid index: " + index);
		} catch(Exception e){
			System.err.println("There was an error: " + e.getMessage());
		}
	}

	public void deleteEvent(int index){
		try{
			events.remove(index);
		} catch(IndexOutOfBoundsException e){
			System.err.println("Invalid index: " + index);
		}
	}

}
