#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 10
#define MAX_LENGTH 50

struct Movie {
    char title[MAX_LENGTH];
    char genre[MAX_LENGTH];
    char director[MAX_LENGTH];
    int release_year;
    float rating;
};

struct Movie movies[MAX_MOVIES];
int movie_count = 0;

void addMovie();
void searchByGenre();
void displayMovies();

int main() {
    int choice;
    
    printf("=== Movie Database System ===\n");
    
    do {
        printf("\nMenu:\n");
        printf("1. Add Movie\n");
        printf("2. Search by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        
        switch(choice) {
            case 1:
                addMovie();
                break;
            case 2:
                searchByGenre();
                break;
            case 3:
                displayMovies();
                break;
            case 4:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 4);
    
    return 0;
}

void addMovie() {
    if(movie_count >= MAX_MOVIES) {
        printf("Database is full! Cannot add more movies.\n");
        return;
    }
    
    printf("\n--- Add New Movie ---\n");
    
    printf("Enter title: ");
    fgets(movies[movie_count].title, MAX_LENGTH, stdin);
    movies[movie_count].title[strcspn(movies[movie_count].title, "\n")] = 0; // Remove newline
    
    printf("Enter genre: ");
    fgets(movies[movie_count].genre, MAX_LENGTH, stdin);
    movies[movie_count].genre[strcspn(movies[movie_count].genre, "\n")] = 0;
    
    printf("Enter director: ");
    fgets(movies[movie_count].director, MAX_LENGTH, stdin);
    movies[movie_count].director[strcspn(movies[movie_count].director, "\n")] = 0;
    
    printf("Enter release year: ");
    scanf("%d", &movies[movie_count].release_year);
    
    printf("Enter rating (0.0-10.0): ");
    scanf("%f", &movies[movie_count].rating);
    getchar(); 
    
    movie_count++;
    printf("Movie added successfully!\n");
}

void searchByGenre() {
    char search_genre[MAX_LENGTH];
    int found = 0;
    
    if(movie_count == 0) {
        printf("No movies in database!\n");
        return;
    }
    
    printf("\nEnter genre to search: ");
    fgets(search_genre, MAX_LENGTH, stdin);
    search_genre[strcspn(search_genre, "\n")] = 0;
    
    printf("\n--- Movies in '%s' genre ---\n", search_genre);
    
    for(int i = 0; i < movie_count; i++) {
        if(strcasecmp(movies[i].genre, search_genre) == 0) {
            printf("Title: %s\n", movies[i].title);
            printf("Director: %s\n", movies[i].director);
            printf("Release Year: %d\n", movies[i].release_year);
            printf("Rating: %.1f\n", movies[i].rating);
            printf("------------------------\n");
            found = 1;
        }
    }
    
    if(!found) {
        printf("No movies found in this genre.\n");
    }
}


void displayMovies() {
    if(movie_count == 0) {
        printf("No movies in database!\n");
        return;
    }
    
    printf("\n--- All Movies (%d) ---\n", movie_count);
    
    for(int i = 0; i < movie_count; i++) {
        printf("Movie #%d:\n", i + 1);
        printf("  Title: %s\n", movies[i].title);
        printf("  Genre: %s\n", movies[i].genre);
        printf("  Director: %s\n", movies[i].director);
        printf("  Release Year: %d\n", movies[i].release_year);
        printf("  Rating: %.1f/10.0\n", movies[i].rating);
        printf("------------------------\n");
    }
}