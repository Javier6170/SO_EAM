public class EncontrarMaximo {
    public static int encontrarMaximo(int[] lista) {
        if (lista.length == 0) {
            return -1; // Devuelve un valor predeterminado para listas vacías
        }
        int maximo = lista[0];
        for (int i = 1; i < lista.length; i++) {
            if (lista[i] > maximo) {
                maximo = lista[i];
            }
        }
        return maximo;
    }

    public static void main(String[] args) {
        int[] listaNumeros = {5, 2, 9, 1, 7, 6};
        int resultado = encontrarMaximo(listaNumeros);
        System.out.println("El número más grande es: " + resultado);
    }
}
