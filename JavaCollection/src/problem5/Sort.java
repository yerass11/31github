package problem5;

public class Sort {

    static <E> void swap (E[] array, int i, int j) {
		E sort = array[i];
        array[i] = array[j];
        array[j] = sort;
	}

    public static <E extends Comparable<E>> void bubbleSort(E[] array) {
        int n = array.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (array[j].compareTo(array[j + 1]) > 0) {
                    swap(array, j, j + 1);
}
}
}
}

}
