import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;

public class Main {

	public static class Graph{
		private LinkedList<Integer>[] adj;
//		private int ClickCounter;
		@SuppressWarnings("unchecked")
		public Graph(int v){
			this.adj = new LinkedList[101];
			for(int i = 0; i < 101;i++){
				this.adj[i] = new LinkedList<>();
			}
		}
		
		
		public void addVertex(int src, int dest){
			this.adj[src].add(dest);
			this.adj[dest].add(src);
		}

		public int BFS(int begin, int end){
			boolean[] visited = new boolean[101];
			LinkedList<Integer> BFSQueue = new LinkedList<>();
			int[] distances = new int[101];
			distances[begin] = 0;
			visited[begin] = true;
			BFSQueue.add(begin);
			boolean founded = false;
			while(!BFSQueue.isEmpty()){
				int tmp = BFSQueue.poll();
				//System.out.print(this.mapa2[tmp] + " ");
				
				Iterator<Integer> ite = this.adj[tmp].listIterator();
				while(ite.hasNext()){
					int next = ite.next();
					if(visited[next] == false){
						distances[next] = distances[tmp] + 1;
						visited[next] = true;
						if(next == end){
							founded = true;
							break;
						}
						BFSQueue.add(next);
					}
				}
				if(founded == true) break;
			}
			
			return distances[end];
		}
		
		public int BreadthFirstSearch(int Gonzo, int photo){
			return BFS(Gonzo, 0) + BFS(0, photo);
		}
		
			
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int K = sc.nextInt();
		Graph g = new Graph(N);
		while((K--) != 0){
			g.addVertex(sc.nextInt(), sc.nextInt());
		}
		System.out.println(g.BreadthFirstSearch(sc.nextInt(), sc.nextInt()));
		sc.close();
	}
	

}
