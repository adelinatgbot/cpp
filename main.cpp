//1 Построить однонаправленный список целых чисел. Найти сумму квадратов нечетных элементов.
//#include <iostream>
//#include <string.h>
//using namespace std;
//struct list
//{
// int info;
// list* next;
//};
//list* make_list()
//{
// list* beg = new(list);
// list* r, * p;
// int x;
// cin >> x;
// beg->info = x;
// p = beg;
// while (x != 0)
// {
//  cin >> x;
//  if (x != 0)
//  {
//   r = new(list);
//   r->info = x;
//   r->next = NULL;
//   p->next = r;
//   p = r;
//  }
// }
// return beg;
//}
//void print(list* beg)
//{
// list* p = beg;
// while (p != NULL)
// {
//  cout << "Elem: " << p->info << " ";
//  p = p->next;
// }
//}
//void main()
//{
// list* beg = make_list();
// list* p = beg;
// int s = 0;
// while (p != NULL)
// {
//  if (p->info % 2 != 0)
//  {
//   s += (p->info)*(p->info);
//  }
//  p = p->next;
// }
// print(beg);
// cout << s;
//}


//2 Заменить отрицательные элементы однонаправленного списка, за которыми следуют нечетные элементы, модулями этих отрицательных чисел.
//#include <iostream>
//#include <string.h>
//using namespace std;
//struct list
//{
// int info;
// list* next;
//};
//list* make_list()
//{
// list* beg = new(list);
// list* r, * p;
// int x;
// cin >> x;
// beg->info = x;
// p = beg;
// while (x != 0)
// {
//  cin >> x;
//  if (x != 0)
//  {
//   r = new(list);
//   r->info = x;
//   r->next = NULL;
//   p->next = r;
//   p = r;
//  }
// }
// return beg;
//}
//void print(list* beg)
//{
// list* p = beg;
// while (p != NULL)
// {
//  cout << "Elem: " << p->info << " ";
//  p = p->next;
// }
//}
//void main()
//{
// list* beg = make_list();
// list* p = beg;
// while (p != NULL)
// {
//  if (p->info < 0 && p->next->info % 2 == 1)
//  {
//   p->info *= -1;
//  }
//  p = p->next;
// }
// print(beg);
//}


//3 Найти количество кратных 5 элементов, значение которых превосходит среднее арифметическое положительных элементов списка.
//#include <iostream>
//#include <string.h>
//using namespace std;
//struct list
//{
// int info;
// list* next;
//};
//list* make_list()
//{
// list* beg = new(list);
// list* r, * p;
// int x;
// cin >> x;
// beg->info = x;
// p = beg;
// while (x != 0)
// {
//  cin >> x;
//  if (x != 0)
//  {
//   r = new(list);
//   r->info = x;
//   r->next = NULL;
//   p->next = r;
//   p = r;
//  }
// }
// return beg;
//}
//void print(list* beg)
//{
// list* p = beg;
// while (p != NULL)
// {
//  cout << "Elem: " << p->info << " ";
//  p = p->next;
// }
//}
//double avg(list* beg)
//{
// double s = 0.0, k = 0.0;
// list* p = beg;
// while (p != NULL)
// {
//  if (p->info > 0)
//  {
//   s += p->info;
//   k += 1;
//  }
//  double avg = s / k;
//  return avg;
// }
//}
//void main()
//{
// list* beg = make_list();
// list* p = beg;
// int counter = 0;
// while (p != NULL)
// {
//  if (p->info % 5 == 0 && p->info > avg(beg))
//  {
//   counter ++;
//  }
//  p = p->next;
// }
// print(beg);
// cout << counter;
//}


//4 Заменить некратные 3 элементы списка, суммой нечетных элементов.
//#include <iostream>
//#include <string.h>
//using namespace std;
//struct list
//{
// int info;
// list* next;
//};
//list* make_list()
//{
// list* beg = new(list);
// list* r, * p;
// int x;
// cin >> x;
// beg->info = x;
// p = beg;
// while (x != 0)
// {
//  cin >> x;
//  if (x != 0)
//  {
//   r =new(list);
//   r->info = x;
//   r->next = NULL;
//   p->next = r;
//   p = r;
//  }
// }
// return beg;
//}
//void print(list* beg)
//{
// list* p = beg;
// while (p != NULL)
// {
//  cout << "Elem: " << p->info << " ";
//  p = p->next;
// }
//}
//int summ(list* beg)
//{
// list* p = beg;
// int s = 0;
// while (p != NULL)
// {
//  if (p->info % 2 == 1)
//  {
//   s += p->info;
//  }
//  p = p->next;
// }
// return s;
//}
//void main()
//{
// list* beg = make_list();
// list* p = beg;
// int s = summ(beg);
//
// while (p != NULL)
// {
//  if (p->info % 3 != 0)
//  {
//   p->info = s;
//  }
//  p = p->next;
// }
// print(beg);
//}


//5 Проверить список на упорядоченность по возрастанию.
//#include <iostream>
//#include <string.h>
//using namespace std;
//struct list
//{
// int info;
// list* next;
//};
//list* make_list()
//{
// list* beg = new(list);
// list* r, * p;
// int x;
// cin >> x;
// beg->info = x;
// p = beg;
// while (x != 0)
// {
//  cin >> x;
//  if (x != 0)
//  {
//   r = new(list);
//   r->info = x;
//   r->next = NULL;
//   p->next = r;
//   p = r;
//  }
// }
// return beg;
//}
//void print(list* beg)
//{
// list* p = beg;
// while (p != NULL)
// {
//  cout << "Elem: " << p->info << " ";
//  p = p->next;
// }
//}
//bool sort(list* beg)
//{
//    list* p = beg;
//    while (p->next != NULL)
//    {
//        if ((p->info) > (p->next->info)) return false;
//        p = p->next;
//    }
//    return true;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    list* p = beg;
//    print(beg);
//    if (sort(beg) == true) cout << "Список упорядочен";
//    else cout << "Список неупорядочен";
//}


//6 Увеличить двузначные положительные, за которыми следуют отрицательные на значение наибольшего элемента списка.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list* r, *p;
//    int x;
//    cin >> x;
//    beg->info = x;
//    p = beg;
//    while (x != 0)
//    {
//        cin >> x;
//        if (x != 0)
//        {
//            r = new(list);
//            r->info = x;
//            r->next = NULL;
//            p->next = r;
//            p = r;
//        }
//    }
//    return beg;
//}
//int findmax(list* beg)
//{
//    list* p = beg;
//    int max = p->info;
//    while (p != NULL)
//    {
//        if (max < p->info)
//            max = p->info;
//        p = p->next;
//    }
//    return max;
//}
//int numcounter(int x)
//{
//    int counter = 0;
//    while (abs(x) > 0)
//    {
//        counter++;
//        x /= 10;
//    }
//    return counter;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "Element: " << p->info << " ";
//        p = p->next;
//    }
//}
//int main()
//{
//    list* beg = make_list();
//    list* p = beg;
//    print(beg);
//    int changing = findmax(beg);
//    while (p->next != NULL)
//    {
//        if (numcounter(p->info)==2 && p->info > 0 && p->next->info < 0)
//            p->info += changing;
//        p = p->next;
//    }
//    print(beg);
//}


7 Удалить все положительные элементы, за которыми следуют четные.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list *r, *p;
//    int x;
//    cin >> x;
//    beg->info = x;
//    p = beg;
//    while (x != 0)
//    {
//        cin >> x;
//        if (x != 0)
//        {
//            r = new(list);
//            r->info = x;
//            r-> next = NULL;
//            p->next = r;
//            p = r;
//        }
//    }
//    return beg;
//}
//list* del(list*&beg, int k)
//{
//    list* p =beg;
//    list* r;
//    while (p->next != NULL)
//    {
//        if (p->next->info == k)
//        {
//            r = p->next;
//            if (r->next != NULL)
//            {
//                p->next = r->next;
//                delete r;
//            }
//            else
//            {
//                p->next = NULL;
//                delete r;
//                break;
//            }
//        }
//        p = p->next;
//    }
//    if (beg->info == k)
//    {
//        p = beg;
//        beg = beg->next;
//        delete p;
//    }
//    return beg;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info << " ";
//        p = p-> next;
//    }
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//
//    list* beg = make_list();
//    cout << "Исхоходный список:" << endl;
//    print(beg);
//    list* r = beg, *p = NULL;
//    if (beg->next != NULL)
//        p = beg->next;
//    if (r != NULL && p != NULL) {
//        if (r->info > 0 && p->info % 2 == 0) {
//            beg = r = p;
//            p = p->next;
//        }
//    }
//    while (p->next != NULL)
//    {
//        if (p->info > 0 && p->next->info % 2 == 0)
//        {
//            r->next = p->next;
//        }
//        else
//        {
//            r = p;
//        }
//        p = p->next;
//    }
//    cout << "Новый список:" << endl;
//    print(beg);
//}


//8 Удалить все кратные 5 элементы, до которых идет отрицательный элемент.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list *r, *p;
//    int x;
//    cin >> x;
//    beg->info = x;
//    p = beg;
//    while (x != 0)
//    {
//        cin >> x;
//        if (x != 0)
//        {
//            r = new(list);
//            r->info = x;
//            r-> next = NULL;
//            p->next = r;
//            p = r;
//        }
//    }
//    return beg;
//}
//list* del(list*&beg, int k)
//{
//    list* p =beg;
//    list* r;
//    while (p->next != NULL)
//    {
//        if (p->next->info == k)
//        {
//            r = p->next;
//            if (r->next != NULL)
//            {
//                p->next = r->next;
//                delete r;
//            }
//            else
//            {
//                p->next = NULL;
//                delete r;
//                break;
//            }
//        }
//        p = p->next;
//    }
//    if (beg->info == k)
//    {
//        p = beg;
//        beg = beg->next;
//        delete p;
//    }
//    return beg;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info << " ";
//        p = p-> next;
//    }
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//
//    list* beg = make_list();
//    cout << "Исхоходный список:" << endl;
//    print(beg);
//    list* p = beg;
//    while (p != NULL && p->next != NULL)
//    {
//        if (p->info < 0 && p->next->info % 5 == 0)
//        {
//            del(beg, p->next->info);
//        }
//        else
//        {
//            p = p->next;
//        }
//    }
//    cout << "Новый список:" << endl;
//    print(beg);
//}


//9 Удалить все двузначные элементы, расположенные между равными элементами.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list *r, *p;
//    int x;
//    cin >> x;
//    beg->info = x;
//    p = beg;
//    while (x != 0)
//    {
//        cin >> x;
//        if (x != 0)
//        {
//            r = new(list);
//            r->info = x;
//            r-> next = NULL;
//            p->next = r;
//            p = r;
//        }
//    }
//    return beg;
//}
//list* del(list*&beg, int k)
//{
//    list* p =beg;
//    list* r;
//    while (p->next != NULL)
//    {
//        if (p->next->info == k)
//        {
//            r = p->next;
//            if (r->next != NULL)
//            {
//                p->next = r->next;
//                delete r;
//            }
//            else
//            {
//                p->next = NULL;
//                delete r;
//                break;
//            }
//        }
//        p = p->next;
//    }
//    if (beg->info == k)
//    {
//        p = beg;
//        beg = beg->next;
//        delete p;
//    }
//    return beg;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info << " ";
//        p = p-> next;
//    }
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//
//    list* beg = make_list();
//    cout << "Исхоходный список:" << endl;
//    print(beg);
//    list* p = beg;
//    while (p != NULL && p->next != NULL && p->next->next != NULL)
//    {
//        if (p->info == p->next->next->info && p->next->info / 100 == 0 && p->next->info / 10 != 0)
//        {
//            del(beg, p->next->info);
//        }
//        else
//        {
//            p = p->next;
//        }
//    }
//    cout << "Новый список:" << endl;
//    print(beg);
//}


//10 Вставить новый элемент между двумя соседними четными элементами.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list *r, *p;
//    int x;
//    cin >> x;
//    beg->info = x;
//    p = beg;
//    while (x != 0)
//    {
//        cin >> x;
//        if (x != 0)
//        {
//            r = new(list);
//            r->info = x;
//            r-> next = NULL;
//            p->next = r;
//            p = r;
//        }
//    }
//    return beg;
//}
//list* vst(list* &beg, int k, int z)
//{
//    list* p = beg;
//    list* r;
//    while (p != NULL)
//    {
//        if (p->info == k)
//        {
//            r = new(list);
//            r->info = z;
//            r->next = p->next;
//            p->next = r;
//            p = p->next;
//        }
//        else
//        {
//            p = p->next;
//        }
//    }
//    return beg;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info << " ";
//        p = p-> next;
//    }
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    int changing;
//    cout << "\nКакое элемент будет?" << endl;
//    cin >> changing;
//    cout << "\nИсхоходный список:" << endl;
//    print(beg);
//    list* p = beg;
//    while (p != NULL && p->next != NULL)
//    {
//        if (p->info % 2 == 0 && p->next->info % 2 == 0)
//        {
//            vst(beg, p->info, changing);
//            p = p->next->next;
//        }
//        else
//        {
//            p = p->next;
//        }
//    }
//    cout << "Новый список:" << endl;
//    print(beg);
//}


//11  Вставить элемент равный 5 до каждого нечетного элемента списка.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list *r, *p;
//    int x;
//    cin >> x;
//    beg->info = x;
//    p = beg;
//    while (x != 0)
//    {
//        cin >> x;
//        if (x != 0)
//        {
//            r = new(list);
//            r->info = x;
//            r-> next = NULL;
//            p->next = r;
//            p = r;
//        }
//    }
//    return beg;
//}
//list* vst(list* &beg, int k, int z)
//{
//    list* p = beg;
//    list* r;
//    while (p != NULL)
//    {
//        if (p->info == k)
//        {
//            r = new(list);
//            r->info = z;
//            r->next = p->next;
//            p->next = r;
//            p = p->next;
//        }
//        else
//        {
//            p = p->next;
//        }
//    }
//    return beg;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info << " ";
//        p = p-> next;
//    }
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    cout << "\nИсхоходный список:" << endl;
//    print(beg);
//    list* p = beg;
//    while (p != NULL && p->next != NULL)
//    {
//        if (p->next->info % 2 == 1)
//        {
//            vst(beg, p->info, 5);
//            p = p->next->next;
//        }
//        else
//        {
//            p = p->next;
//        }
//    }
//    cout << "Новый список:" << endl;
//    print(beg);
//}


//12 Вставить элемент со значением наименьшего четного элемента после каждого элемента, оканчивающегося на 13.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list *r, *p;
//    int x;
//    cin >> x;
//    beg->info = x;
//    p = beg;
//    while (x != 0)
//    {
//        cin >> x;
//        if (x != 0)
//        {
//            r = new(list);
//            r->info = x;
//            r-> next = NULL;
//            p->next = r;
//            p = r;
//        }
//    }
//    return beg;
//}
//list* vst(list* &beg, int k, int z)
//{
//    list* p = beg;
//    list* r;
//    while (p != NULL)
//    {
//        if (p->info == k)
//        {
//            r = new(list);
//            r->info = z;
//            r->next = p->next;
//            p->next = r;
//            p = p->next;
//        }
//        else
//        {
//            p = p->next;
//        }
//    }
//    return beg;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info << " ";
//        p = p-> next;
//    }
//}
//int findmin(list* beg)
//{
//    list* p = beg;
//    int m = p->info;
//    while (p != NULL)
//    {
//        if (p->info % 2 == 0 && p->info < m)
//        {
//            m = p->info;
//        }
//        p = p->next;
//    }
//    return m;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    int changing = findmin(beg);
//    cout << "\nИсхоходный список:" << endl;
//    print(beg);
//    list* p = beg;
//    while (p != NULL && p->next != NULL)
//    {
//        if (p->info % 100 == 13)
//        {
//            vst(beg, p->info, changing);
//            p = p->next->next;
//        }
//        else
//        {
//            p = p->next;
//        }
//    }
//    cout << "\nНовый список:" << endl;
//    print(beg);
//}


//1 Построить однонаправленный список целых чисел. Заменить элементы, оканчивающиеся на 2, суммой квадратов отрицательных элементов списка.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list *r, *p;
//    int x;
//    cin >> x;
//    beg->info = x;
//    p = beg;
//    while (x != 0)
//    {
//        cin >> x;
//        if (x != 0)
//        {
//            r = new(list);
//            r->info = x;
//            r-> next = NULL;
//            p->next = r;
//            p = r;
//        }
//    }
//    return beg;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info << " ";
//        p = p-> next;
//    }
//}
//int sum(list* beg)
//{
//    list* p = beg;
//    int s = 0;
//    while (p != NULL)
//    {
//        if (p->info < 0)
//        {
//            s += p->info * p->info;
//        }
//        p = p->next;
//    }
//    return s;
//}
//int main()
//{
//    list* beg = make_list();
//    list* p = beg;
//    print(beg);
//    int changing = sum(beg);
//    while (p != NULL)
//    {
//        if (p->info % 10 == 2)
//        {
//            p->info = changing;
//        }
//        p = p->next;
//    }
//    print(beg);
//}


//2 Построить однонаправленный список целых чисел. Найти произведение квадратов элементов, оканчивающихся на 22.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list *r, *p;
//    int x;
//    cin >> x;
//    beg->info = x;
//    p = beg;
//    while (x != 0)
//    {
//        cin >> x;
//        if (x != 0)
//        {
//            r = new(list);
//            r->info = x;
//            r-> next = NULL;
//            p->next = r;
//            p = r;
//        }
//    }
//    return beg;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info << " ";
//        p = p-> next;
//    }
//}
//int mult(list* beg)
//{
//    list* p = beg;
//    int m = 1;
//    while (p != NULL)
//    {
//        if (p->info % 100 == 22)
//        {
//            m *= p->info * p->info;
//        }
//        p = p->next;
//    }
//    return m;
//}
//int main()
//{
//    list* beg = make_list();
//    print(beg);
//    int m = mult(beg);
//    cout << m;
//}


//3 Верно ли, что однонаправленный список является знакочередующимся.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list *r, *p;
//    int x;
//    cin >> x;
//    beg->info = x;
//    p = beg;
//    while (x != 0)
//    {
//        cin >> x;
//        if (x != 0)
//        {
//            r = new(list);
//            r->info = x;
//            r-> next = NULL;
//            p->next = r;
//            p = r;
//        }
//    }
//    return beg;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info << " ";
//        p = p-> next;
//    }
//}
//bool sort(list* beg)
//{
//    list* p = beg;
//    while (p->next != NULL)
//    {
//        if ((p->info < 0 && p->next->info < 0) || (p->info > 0 && p->next->info > 0))
//            return false;
//        p = p->next;
//    }
//    return true;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    print(beg);
//    if (sort(beg) == true)
//        cout << "Список знакочередующийся";
//    else cout << "Список не является знакочередующимся";
//}


//4 Удалить из однонаправленного списка все элементы, у которых последняя и предпоследняя цифры равны.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list *r, *p;
//    int x;
//    cin >> x;
//    beg->info = x;
//    p = beg;
//    while (x != 0)
//    {
//        cin >> x;
//        if (x != 0)
//        {
//            r = new(list);
//            r->info = x;
//            r-> next = NULL;
//            p->next = r;
//            p = r;
//        }
//    }
//    return beg;
//}
//list* del(list*&beg, int k)
//{
//    list* p =beg;
//    list* r;
//    while (p->next != NULL)
//    {
//        if (p->next->info == k)
//        {
//            r = p->next;
//            if (r->next != NULL)
//            {
//                p->next = r->next;
//                delete r;
//            }
//            else
//            {
//                p->next = NULL;
//                delete r;
//                break;
//            }
//        }
//        p = p->next;
//    }
//    if (beg->info == k)
//    {
//        p = beg;
//        beg = beg->next;
//        delete p;
//    }
//    return beg;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info << " ";
//        p = p-> next;
//    }
//}
//int firstdig(int num)
//{
//    while (num >= 10)
//    {
//        num /= 10;
//    }
//    return num;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//
//    list* beg = make_list();
//    cout << "Исхоходный список:" << endl;
//    print(beg);
//    list* p = beg;
//    while (p != NULL)
//    {
//        if (firstdig(p->info) == p->info % 10)
//        {
//            del(beg, p->info);
//        }
//        else
//        {
//            p = p->next;
//        }
//    }
//    cout << "Новый список:" << endl;
//    print(beg);
//}

//5 Построить однонаправленный список целых чисел. Удалить все делящиеся на 8 элементы, перед которыми нет нечетного числа.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list *r, *p;
//    int x;
//    cin >> x;
//    beg->info = x;
//    p = beg;
//    while (x != 0)
//    {
//        cin >> x;
//        if (x != 0)
//        {
//            r = new(list);
//            r->info = x;
//            r-> next = NULL;
//            p->next = r;
//            p = r;
//        }
//    }
//    return beg;
//}
//list* del(list*&beg, int k)
//{
//    list* p =beg;
//    list* r;
//    while (p->next != NULL)
//    {
//        if (p->next->info == k)
//        {
//            r = p->next;
//            if (r->next != NULL)
//            {
//                p->next = r->next;
//                delete r;
//            }
//            else
//            {
//                p->next = NULL;
//                delete r;
//                break;
//            }
//        }
//        p = p->next;
//    }
//    if (beg->info == k)
//    {
//        p = beg;
//        beg = beg->next;
//        delete p;
//    }
//    return beg;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info << " ";
//        p = p-> next;
//    }
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    cout << "Исхоходный список:" << endl;
//    print(beg);
//    list* p = beg;
//    while (p != NULL && p->next != NULL)
//    {
//        if (p->next->info % 8 == 0 && p->info % 2 == 0)
//        {
//            del(beg, p->next->info);
//        }
//        else
//        {
//            p = p->next;
//        }
//    }
//    cout << "Новый список:" << endl;
//    print(beg);
//}


//6 Вставить элемент со значением количества положительных элементов списка, до каждоготрехзначного числа
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list *r, *p;
//    int x;
//    cin >> x;
//    beg->info = x;
//    p = beg;
//    while (x != 0)
//    {
//        cin >> x;
//        if (x != 0)
//        {
//            r = new(list);
//            r->info = x;
//            r-> next = NULL;
//            p->next = r;
//            p = r;
//        }
//    }
//    return beg;
//}
//list* vst(list* &beg, int k, int z)
//{
//    list* p = beg;
//    list* r;
//    while (p != NULL)
//    {
//        if (p->info == k)
//        {
//            r = new(list);
//            r->info = z;
//            r->next = p->next;
//            p->next = r;
//            p = p->next;
//        }
//        else
//        {
//            p = p->next;
//        }
//    }
//    return beg;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info << " ";
//        p = p-> next;
//    }
//}
//int counter(list* beg)
//{
//    list* p = beg;
//    int k = 0;
//    while (p != NULL)
//    {
//        if (p->info > 0)
//        {
//            k++;
//        }
//        p = p->next;
//    }
//    return k;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    int k = counter(beg);
//    cout << "\nИсхоходный список:" << endl;
//    print(beg);
//    list* p = beg;
//    while (p != NULL && p->next != NULL)
//    {
//        if (p->next->info / 1000 == 0 && p->next->info / 100 != 0)
//        {
//            vst(beg, p->info, k);
//            p = p->next->next;
//        }
//        else
//        {
//            p = p->next;
//        }
//    }
//    cout << "\nНовый список:" << endl;
//    print(beg);
//}
#include <iostream>
using namespace std;
struct list
{
    int info;
    list* next;
};
list* make_list()
{
    list* beg = new(list);
    list* r, * p;
    int x;
    cin >> x;
    beg->info = x;
    p = beg;
    while (x != 0)
    {
        cin >> x;
        if (x != 0)
        {
            r = new(list);
            r->info = x;
            r->next = NULL;
            p->next = r;
            p = r;
        }
    }
    return beg;
}
list* vst(list*& beg, int k, int z)
{
    list* p = beg;
    list* r;
    while (p != NULL)
    {
        if (p->info == k)
        {
            r = new(list);
            r->info = z;
            r->next = p->next;
            p->next = r;
            p = p->next;
        }
        else
        {
            p = p->next;
        }
    }
    return beg;
}
void print(list* beg)
{
    list* p = beg;
    while (p != NULL)
    {
        cout << "\nElement:" << p->info << " ";
        p = p->next;
    }
}
int findmin(list* beg)
{
    list* p = beg;
    int m = p->info;
    while (p != NULL)
    {
        if (p->info < m)
            m = p->info;
        p = p->next;
    }
    return m;
}
int sumdig(int x)
{
    int s = 0;
    while (x != 0)
    {
        s += s % 10;
        x /= 10;
    }
    return s;
}
int main()
{
    setlocale(LC_ALL, "RU");
    list* beg = make_list();
    list* p = beg;
    int m = findmin(beg);
    cout << "Старый список: " << endl;
    print(beg);
    while (p != NULL)
    {
        if (sumdig(p->info) % 2 == 0)
        {
            vst(beg, p->info, m);
            p = p->next->next;
        }
        else p = p->next;
    }
    cout << "Новый список: " << endl;
    print(beg);
}
