// Write your Checker class here
class Checker implements Comparator<Player> {
    
    @Override
    public int compare(Player player1, Player player2) {
        // First, compare scores in descending order
        if (player1.score != player2.score) {
            return player2.score - player1.score;
        }
        // If scores are the same, compare names in ascending order
        return player1.name.compareTo(player2.name);
    }
}
