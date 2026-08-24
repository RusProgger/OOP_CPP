#include <iostream>
#include <string>


class Book {
    private:
        std::string title;
        std::string author;
        int pages;

    public:
        Book(std::string title, std::string author,  int pages) 
            : title(title), author(author), pages(pages)
        {
            // проверка 
            set_pages(pages);
        }

        void set_pages(int pages) {
            if(pages > 0) 
                this->pages = pages;
            else 
                std::cout << "Ошибка: количество страниц должно быть больше 0\n";
        }

        std::string get_title() {
            return title;
        }

        std::string get_author() {
            return author;
        }

        int get_pages() {
            return pages;
        }

        void info() {
            std::cout << "Книга: " << title << " | " << "Автор: " << author << " | " << "Страниц: " << pages << "\n";
        }
};

int main() {

    Book book("Гарри Поттер", "Роулинг", 500);
    Book book2("Орхидея", "Руссо", 120);


    book.info();
    book2.info();
    return 0;
}