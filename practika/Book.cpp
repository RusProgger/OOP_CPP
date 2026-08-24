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

        }

        void set_pages(int pages) {
            if(pages > 0) 
                this->pages = pages;
            else 
                std::cout << "Ошибка: количество страниц должно быть больше 0";
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

        
};

int main() {



    return 0;
}