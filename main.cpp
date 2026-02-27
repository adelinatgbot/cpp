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


//7 Удалить все положительные элементы, за которыми следуют четные.
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
//        if (p->info > 0 && p->next->info % 2 == 0)
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
//            r->info = x;
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
//1. Вставить минимальный элемент списка до каждого элемента с четной суммой цифр (функция – сумма цифр).
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
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\n Element: " << p->info;
//        p = p->next;
//    }
//}
//int findmin(list* beg)
//{
//    list*p = beg;
//    int m = p->info;
//    while(p != NULL)
//    {
//        if (p->info < m)
//            m = p->info;
//        p = p->next;
//    }
//    return m;
//}
//int sumdig(int x)
//{
//    int s = 0;
//    while (x != 0)
//    {
//        s += x % 10;
//        x /= 10;
//    }
//    return s;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    list* p = beg;
//    int m = findmin(beg);
//    while (p->next != NULL)
//    {
//        if (sumdig(p->next->info) % 2 == 0)
//        {
//            list* r = new(list);
//            r->info = m;
//            r->next = p->next;
//            p->next = r;
//            p = p->next;
//        }
//        p = p->next;
//    }
//    print(beg);
//}
//2. Удалить из списка все простые элементы.
//#include <iostream>
//using namespace std;
//
//struct list
//{
//    int info;
//    list* next;
//};
//
//// Функция создания списка
//list* make_list()
//{
//    list* beg = NULL;
//    list* p = NULL;
//    int x;
//
//    cout << "Введите числа (0 для окончания ввода): ";
//    cin >> x;
//
//    if (x == 0) return NULL;  // если сразу 0 - список пуст
//
//    // Создаем первый элемент
//    beg = new list;
//    beg->info = x;
//    beg->next = NULL;
//    p = beg;
//
//    // Читаем остальные числа
//    while (true)
//    {
//        cin >> x;
//        if (x == 0) break;
//
//        list* r = new list;
//        r->info = x;
//        r->next = NULL;
//        p->next = r;
//        p = r;
//    }
//
//    return beg;
//}
//
//// Функция вывода списка
//void print(list* beg)
//{
//    if (beg == NULL)
//    {
//        cout << "Список пуст!" << endl;
//        return;
//    }
//
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << p->info << " ";
//        p = p->next;
//    }
//    cout << endl;
//}
//
//// Проверка на простое число
//int pr(int x)
//{
//    if (x <= 1) return 0;
//    for (int i = 2; i < x; i++)
//    {
//        if (x % i == 0)
//            return 0;
//    }
//    return 1;
//}
//
//// Удаление простых чисел
//void del(list* &beg)
//{
//    if (beg == NULL) return;
//
//    list* cur = beg;
//    list* prev = NULL;
//
//    while (cur != NULL)
//    {
//        list* next_el = cur->next;
//
//        if (pr(cur->info) == 1)  // если простое
//        {
//            if (prev == NULL)  // удаляем первый
//            {
//                beg = cur->next;
//                delete cur;
//            }
//            else  // удаляем не первый
//            {
//                prev->next = cur->next;
//                delete cur;
//            }
//        }
//        else  // не простое
//        {
//            prev = cur;
//        }
//
//        cur = next_el;
//    }
//}
//
//int main()
//{
//    setlocale(LC_ALL, "RU");
//
//    list* beg = make_list();
//
//    cout << "Старый список: ";
//    print(beg);
//
//    del(beg);
//
//    cout << "Новый список: ";
//    print(beg);
//
//    return 0;
//}
//3. Вставить между двумя совершенными элементами новый элемент со значением «11».
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
//void print(list* beg)
//{
//    list* p = beg;
//    while ( p != NULL)
//    {
//        cout << "\n Element: " << p->info;
//        p = p->next;
//    }
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
//            if (p->next != NULL)
//            {
//                r->next = p->next;
//                p->next = r;
//            }
//            else
//            {
//                r->next = NULL;
//                p->next = r;
//            }
//        }
//        p = p->next;
//    }
//    return beg;
//}
//int ab(int x)
//{
//    int s = 1;
//    for (int i = 2; i < x; i++)
//        if (x % i == 0) s+= i;
//    return x == s;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    list* p = beg;
//    cout << "\nСтарый список: ";
//    print(beg);
//    while (p != NULL && p->next != NULL)
//    {
//        if (ab(p->info) && ab(p->next->info))
//        {
//            vst(beg, p->info, 11);
//            p = p->next->next;
//        }
//        else p = p->next;
//    }
//    cout << "\nНовый список: ";
//    print(beg);
//}
//4. Дан одномерный массив. Записать в однонаправленный список только те элементы массива, в записи которых ровно две «2». Затем из списка удалить все элементы, оканчивающиеся на 2.
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
//    list* p, *r;
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
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//int counter(int x)
//{
//    int k = 0;
//    while (x != 0)
//    {
//        if (x % 10 == 2)
//            k++;
//        x /= 10;
//    }
//    return k;
//}
//int main()
//{
//    setlocale (LC_ALL, "RU");
//    list* beg = make_list();
//    list* p =beg;
//    cout << "\nСтарый список";
//    print(beg);
//    list* prev = NULL; //предыдуштй элемент
//    while (p != NULL)
//    {
//        if (counter(p->info) != 2)
//        {
//            if (prev == NULL)//если это первый элемент
//            {
//                beg = p->next; // начало списка тепер не текущий а следующий
//                delete p;// удаляем текущий
//                p = beg;// теперь начинаем с нового элемента
//            }
//            else // если это не первый элемент
//            {
//                prev->next = p->next;// предыдущий теперь следующий
//                delete p;// удаляем текущий
//                p = prev->next;// текущий теперь следующий
//            }
//        }
//        else // если не нужно удалить
//        {
//            prev = p;// текущий элемент стал предыдущим
//            p = p->next;// следующий элемент теперь текущий
//        }
//    }
//    cout << "\nСписок из элементов с двумя двойками в записи: ";
//    print(beg);
//    prev = NULL;
//    p = beg;
//    while(p != NULL)
//    {
//        if (p->info % 10 == 2)
//        {
//            if (prev == NULL)
//            {
//                beg = p->next;
//                delete p;
//                p = beg;
//            }
//            else{
//                prev->next = p->next;
//                delete p;
//                p = prev->next;
//            }
//        }
//        else
//        {
//            prev = p;
//            p = p->next;
//        }
//    }
//    cout << "\nСписок без элементов, оканчивающихся на 2";
//    print(beg);
//
//}
//5. Дан однонаправленный список. Если в нем нет элементов, состоящих только из цифры 7 (функция), то построить другой однонаправленный список, включающий только те элементы, у которых ровно три цифры 7.
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
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//bool seven(int x)
//{
//    while (x != 0)
//    {
//        if (x % 10 != 7)
//            return false;
//        x /= 10;
//    }
//    return true;
//}
//int counter(int x)
//{
//    int k = 0;
//    while (x != 0)
//    {
//        if (x % 10 == 7) k++;
//        x /= 10;
//    }
//    return k;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    list* p = beg;
//    list* new_beg = NULL;
//    list* new_end = NULL;
//    cout << "\nСтарый список:";
//    print(beg);
//    while (p != NULL)
//    {
//        if (!seven(p->info) && counter(p->info) == 3)
//        {
//            list* r = new(list);
//            r->info = p->info;
//            r->next = NULL;
//            if (new_beg == NULL)
//            {
//                new_beg = r;
//                new_end = r;
//            }
//            else
//            {
//                new_end->next = r;
//                new_end = r;
//            }
//        }
//        p = p->next;
//    }
//    cout << "\nНовый список:";
//    print(new_beg);
//}
//6. Дан однонаправленный список. Построить одномерный массив, включающий только те элементы, у которых ровно три делителя кратных 5 (функция). Затем проверить массив на возрастание элементов.
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
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//int del(int x)
//{
//    int k = 0;
//    for (int i = 2; i < x; i++)
//    {
//        if (x % i == 0 && i % 5 == 0) k++;
//    }
//    return k;
//}
//bool sort(list* beg)
//{
//    list* p = beg;
//    while (p != NULL && p->next != NULL)
//    {
//        if (p->info > p->next->info) return false;
//        p = p->next;
//    }
//    return true;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    list* p = beg;
//    cout << "\nСтарый список:";
//    print(beg);
//    list* new_end = NULL, *new_beg = NULL;
//    while (p != NULL)
//    {
//        if (del(p->info) == 3)
//        {
//            list* r = new(list);
//            r->info = p->info;
//            r->next = NULL;
//            if (new_beg == NULL)
//            {
//                new_beg = r;
//                new_end = r;
//            }
//            else
//            {
//                new_end->next = r;
//                new_end = r;
//            }
//        }
//        p = p->next;
//    }
//    cout << "\nНовый список:";
//    print(new_beg);
//    if (sort(new_beg)) cout << "\nСписок возрастающий";
//    else cout << "\nСписок не возратсает";
//}
//7. Дано два однонаправленных списка. Получить третий список, содержащий только положительные элементы исходных списков.
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
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg1 = make_list();
//    list* beg2 = make_list();
//    list* p1 = beg1, *p2 = beg2;
//    cout << "\nСписок 1:";
//    print(beg1);
//    cout << "\nСписок 2:";
//    print(beg2);
//    list* new_beg = NULL, *new_end = NULL;
//    while (p1 != NULL)
//    {
//        if (p1->info > 0)
//        {
//            list* r = new(list);
//            r->info = p1->info;
//            r->next = NULL;
//            if (new_beg == NULL)
//            {
//                new_beg = r;
//                new_end = r;
//            }
//            else
//            {
//                new_end->next = r;
//                new_end = r;
//            }
//        }
//        p1 = p1->next;
//    }
//    while (p2 != NULL)
//    {
//        if (p2->info > 0)
//        {
//            list* r = new(list);
//            r->info = p2->info;
//            r->next = NULL;
//            if (new_beg == NULL)
//            {
//                new_beg = r;
//                new_end = r;
//            }
//            else
//            {
//                new_end->next = r;
//                new_end = r;
//            }
//        }
//        p2 = p2->next;
//    }
//    cout << "\nНовый список:";
//    print(new_beg);
//}
//8. Дано два однонаправленных, упорядоченных по возрастанию, списка. Получить третий список, также упорядоченный по возрастанию.
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
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//void sort(list* beg)
//{
//    if (beg == NULL || beg->next == NULL)
//        return;
//    int count = 0;
//    list* p = beg;
//    while (p != NULL)
//    {
//        count++;
//        p = p->next;
//    }
//    int* arr = new int[count];
//    p = beg;
//    for (int i = 0; i < count; i++)
//    {
//        arr[i] = p->info;
//        p = p->next;
//    }
//    for (int i = 0; i < count - 1; i++)
//    {
//        for (int j = 0; j < count - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    p = beg;
//    for (int i = 0; i < count; i++)
//    {
//        p->info = arr[i];
//        p = p->next;
//    }
//    delete[] arr;
//}
//int main()
//{
//    list* beg1 = make_list();
//    list* beg2 = make_list();
//    list* p1 = beg1, *p2 = beg2;
//    list* new_beg = NULL, *new_end = NULL;
//    cout << "\nСписок 1:";
//    print(beg1);
//    cout << "\nСписок 2:";
//    print(beg2);
//    while (p1 != NULL)
//    {
//        list* r = new(list);
//        r->info = p1->info;
//        r->next = NULL;
//        if (new_beg == NULL)
//        {
//            new_beg = r;
//            new_end = r;
//        }
//        else
//        {
//            new_end->next = r;
//            new_end = r;
//        }
//        p1 = p1->next;
//    }
//    while (p2 != NULL)
//    {
//        list* r = new(list);
//        r->info = p2->info;
//        r->next = NULL;
//        if (new_beg == NULL)
//        {
//            new_beg = r;
//            new_end = r;
//        }
//        else
//        {
//            new_end->next = r;
//            new_end = r;
//        }
//        p2 = p2->next;
//    }
//    sort(new_beg);
//    cout << "\nНовый список:";
//    print(new_beg);
//}
   
//1. Заменить все элементы списка, являющиеся числами Фибоначчи, количеством отрицательных элементов списка.
// #include <iostream>
// using namespace std;
// struct list
// {
//     int info;
//     list* next;
// };
// list* make_list()
// {
//     list* beg = new(list);
//     list* r, * p;
//     int x;
//     cin >> x;
//     beg->info = x;
//     p = beg;
//     while (x != 0)
//     {
//         cin >> x;
//         if (x != 0)
//         {
//             r = new(list);
//             r->info = x;
//             r->next = NULL;
//             p->next = r;
//             p = r;
//         }
//     }
//     return beg;
// }
// void print(list* beg)
// {
//     list* p = beg;
//     while (p != NULL)
//     {
//         cout << "\nElement:" << p->info;
//         p = p->next;
//     }
// }
// bool fib(int x)
// {
//     int s = 0;
//     if (x < 0) return false;
//     if (x == 0 || x == 1) return true;
//     int a = 0, b = 1, c = 1;
//     while (c < x)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return (c == x);
// }
// int counter(list* beg)
// {
//     int k = 0;
//     list* p = beg;
//     while (p != NULL)
//     {
//         if (p->info < 0)
//             k++;
//         p = p->next;
//     }
//     return k;
// }
// int main()
// {
//     setlocale(LC_ALL, "RU");
//     list* beg = make_list();
//     list* p = beg;
//     cout << "\nСтарый список:";
//     print(beg);
//     int changing = counter(beg);
//     while (p != NULL)
//     {
//         if (fib(p->info))
//             p->info = changing;
//         p = p->next;
//     }
//     cout << "\nНовый список:";
//     print(beg);
// }
//ФУНКЦИЯ ДЛЯ НОВОГО СПИСКА
// list* make_newlist(list* beg)
// {
//    list* beg2 = new(list);
//    list* t = beg, *r = NULL;
//    while (t != NULL)
//       {
//          if (условие соблюдается)
//          {
//             list* p = new(list);
//             p->info = t->info;
//             p-> next = NULL;
//             if (r != NULL)
//                r->next = p;
//             else
//                beg2 = p;
//          }
//            t = t->next;
//       }
//    return beg2;
// }
//2. Вставить элемент равный количеству некратных 3 элементов, после каждого двузначного элемента.
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
//    list* p, * r;
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
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//int counter(list* beg)
//{
//    int k = 0;
//    list* p = beg;
//    while (p != NULL)
//    {
//        if (p->info % 3 != 0) k++;
//        p = p->next;
//    }
//    return k;
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
//            if (p->next != NULL)
//            {
//                r->next = p->next;
//                p->next = r;
//            }
//            else
//            {
//                r->next = NULL;
//                p->next = r;
//            }
//        }
//        p = p->next;
//    }
//    return beg;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    list* p = beg;
//    cout << "\nСтарый список:";
//    print(beg);
//    int into = counter(beg);
//    while (p != NULL)
//    {
//        if (p->info >= 10 && p->info / 10 <=99)
//        {
//            vst(beg, p->info, into);
//            p = p->next->next;
//        }
//        else p = p->next;
//    }
//    cout << "\nНовый список:";
//    print(beg);
//}
//3. Удалить из списка все двузначные и трехзначные элементы, не содержащие в своей записи цифру «1».
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
//    list* p, *r;
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
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//bool one(int x)
//{
//    while (x != 0)
//    {
//        if (x % 10 == 1) return true;
//        x /= 10;
//    }
//    return false;
//}
//list* del(list* beg)
//{
//    list* cur = beg; //текущий элемент
//    list* prev = NULL; //предыдущий элемент
//    list* t = NULL; //для временного хранения
//    while (cur != NULL)
//    {
//        if ( cur->info >= 10 && cur->info <= 999 && !one(cur->info))
//        {
//            t = cur; //запоминаем элемент который удалим
//            if (prev == NULL) // если удаляем первый элемент
//            {
//                beg = cur->next;// начало списка это теперь следующий элемент
//                cur = beg;// переходим к новому элементу
//            }
//            else
//            {
//                prev->next = cur->next;
//                cur = cur->next;
//            }
//            delete t;
//        }
//        else
//        {
//            prev = cur;
//            cur = cur->next;
//        }
//    }
//    return beg;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    cout << "\nСтарый список:";
//    print(beg);
//    beg = del(beg);
//    cout << "\nновый список:";
//    print(beg);
//}
//4. Дан массив целых чисел. Построить однонаправленный список, содержащий только непростые элементы массива.
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
//    list* p, *r;
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
//bool prime(int x)
//{
//    if (x <= 1) return false;
//    for (int i = 2; i < x; i++)
//        if (x % i == 0) return false;
//    return true;
//}
//list* make_newlist(list* beg)
//{
//    list* beg2 = NULL;
//    list* p = beg;
//    while (p != NULL)
//    {
//        if (!prime(p->info))
//        {
//            list* r = new(list);
//            r->info = p->info;
//            r->next = beg2;
//            beg2 = r;
//        }
//        p = p->next;
//    }
//    return beg2;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info;
//        p = p->next;
//    }
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    cout << "\nСтарый список:";
//    print(beg);
//    beg = make_newlist(beg);
//    cout << "\nНовый список:";
//    print(beg);
//}
//5. Дан однонаправленный список. Если не знакочередующийся, то построить другой однонаправленный список, включающий только отрицательные элементы с четным количеством цифр, а затем проверить его на знакочередование.
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
//    list* p, *r;
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
//int countdig(int x)
//{
//    int k = 0;
//    while (x != 0)
//    {
//        x /= 10;
//        k++;
//    }
//    return k;
//}
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement:" << p->info;
//        p = p->next;
//    }
//}
//bool sign(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        if ((p->info > 0 && p->next->info < 0) || (p->info < 0 && p->next->info < 0)) return false;
//        p = p->next;
//    }
//    return true;
//}
//list* make_newlist(list* beg)
//{
//    list* beg2 = NULL;
//    list*p = beg;
//    while (p != NULL)
//    {
//        if(countdig(p->info) % 2 == 1 && p->info < 0)
//        {
//            list* r  = new(list);
//            r->info = p->info;
//            r->next = beg2;
//            beg2 = r;
//        }
//        p = p->next;
//    }
//    return beg2;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    cout << "\nСтарый список:";
//    print(beg);
//    if (!sign(beg))
//        beg = make_newlist(beg);
//    cout << "\nНовый список:";
//    print(beg);
//    if (sign(beg)) cout << "\nСписок знакочередующийся";
//    else cout << "\nСписок не знакочередующийся";
//}
//6. Дан однонаправленный список вещественных чисел. Записать в одномерный массив только те элементы списка, которые имеют одну цифру после запятой.
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
//    list* p, *r;
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
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//void print_arr(double arr[], int size)
//{
//    if (size == 0) cout << "Массив пустой";
//    cout << "Массив: ";
//    for(int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//bool onedig(double x)
//{
//    double x10 = x * 10;
//}
//7. Дано два однонаправленных списка. Получить третий список, содержащий четные элементы первого списка, не входящие во второй список.
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
//    list* p, *r;
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
//void print(list* beg)
//{
//    list* p = beg;
//    while (p != NULL)
//    {
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//bool rep(list* beg2, int x)
//{
//    list* p = beg2;
//    while (p != NULL)
//    {
//        if (x == p->info) return true;
//        p = p->next;
//    }
//    return false;
//}
//list* make_newlist(list* beg1, list* beg2)
//{
//    list* p = beg1, *beg3 = NULL, *t;
//    while (p != NULL)
//    {
//        if ( p->info % 2 == 0 && !rep(beg2, p->info))
//        {
//            list* r = new(list);
//            r->info = p->info;
//            r->next = NULL;
//            if (beg3 == NULL)
//            {
//                beg3 = r;
//                t = beg3;
//            }
//            else
//            {
//                t->next = r;
//            }
//        }
//        p = p->next;
//    }
//    return beg3;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg1 = make_list();
//    
//    list* beg2 = make_list();
//    
//    cout << "\nПервый список:";
//    print(beg1);
//    cout << "\nВторой список:";
//    print(beg2);
//    cout << "\nНовый список:";
//    list* beg3;
//    beg3 = make_newlist(beg1, beg2);
//    print(beg3);
//}
//8. Дано два однонаправленных списка. Получить третий список, содержащий все различные числа исходных списков (удаление элементов не использовать).
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
    list* r, *p;
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
void print(list* beg)
{
    list* p = beg;
    while (p != NULL)
    {
        cout << "\nElement: " << p->info;
        p = p->next;
    }
}
bool rep(list* beg, int x)
{
    list * p = beg;
    while (p != NULL)
    {
        if (p->info == x) return true;
        p = p->next;
    }
    return false;
}
list* make_newlist(list* beg1, list* beg2)
{
    list* p1 = beg1, *p2 = beg2;
    list* beg3 = NULL;
    list* t;
    while (p1 != NULL)
    {
        if (!rep(beg2, p1->info))
        {
            list* r = new(list);
            r->info = p1->info;
            r->next = NULL;
            if (beg3 != NULL)
            {
                beg1 = r;
                t = beg3;
            }
            else t->next = r;
        }
        p1 = p1->next;
    }
    while (p2 != NULL)
    {
        if (!rep(beg1, p2->info))
        {
            list* r = new(list);
            r->info = p2->info;
            r->next = NULL;
            if (beg3 != NULL)
            {
                beg2 = r;
                t = beg3;
            }
            else t->next = r;
        }
        p2 = p2->next;
    }
    return beg3;
}
int main()
{
    setlocale(LC_ALL, "RU");
    cout << "\nВведите первый список:";
    list* beg1 = make_list();
    cout << "\nВведите второй список:";
    list* beg2 = make_list();
    list* beg3 = make_newlist(beg1, beg2);
    cout <<"\nПевый список:";
    print(beg1);
    cout <<"\nВторой список:";
    print(beg2);
    cout <<"\nНовый список:";
    print(beg3);
}
//1. Дан двунаправленный список. Найти значение наибольшего элемента.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//    list* pred;
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
//            r->pred = p;
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
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//int find_max(list* beg)
//{
//    list* p = beg;
//    int m = p->info;
//    while (p != NULL)
//    {
//        if (p->info >  m) m = p->info;
//        p = p->next;
//    }
//    return m;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    cout << "\nСписок: ";
//    print(beg);
//    int max_el = find_max(beg);
//    cout << "\nМаксимальный элемент списка: " << max_el;
//}
//2. Проверить является ли список симметричным.
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//    list* prev;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list* p, *r;
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
//            r->prev = p;
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
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//bool sym(list* beg)
//{
//    list* p = beg;
//    list* r = beg;
//    while (r->next != NULL)
//        r = r->next;
//    {
//        while (p != NULL)
//        {
//            if (p->info != r->info) return false;
//            p = p->next;
//            r = r->prev;
//        }
//        return true;
//    }
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    if (sym(beg)) cout << "\nСписок симметричный";
//    else cout << "\nСписок не симметричный";
//}
//3. Вычислить X1*Xn+X2*Xn-1+…+Xn*X1
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//    list* prev;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list* p, *r;
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
//            r->prev = p;
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
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//int counter(list* beg)
//{
//    int s = 0;
//    list* p = beg;
//    list* r = beg;
//    int length = 1;
//    while (r->next != NULL)
//    {
//        r =r->next;
//        length++;
//    }
//    for (int i = 0; i < length / 2; i++)
//    {
//        s += p->info * r->info;
//        p = p->next;
//        r = r->prev;
//    }
//    if (length % 2 == 1) s += p->info * r->info;
//    return s;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    int result = counter(beg);
//    cout << "\nX1 * Xn + ... + Xn * X1 = " << result;
//}
//4. Заменить все окачивающиеся на 5 элементы, значение последнего четного элемента (движение от последнего элемента).
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//    list* prev;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list* p, *r;
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
//            r->prev = p;
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
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//int find_last(list* beg)
//{
//    int last;
//    list* r = beg;
//    while (r->next != NULL)
//    {
//        r = r->next;
//    }
//    while (r != NULL)
//    {
//        if (r->info % 2 == 0)
//    {
//        last = r->info;
//        break;
//    }
//            r = r->prev;
//    }
//    return last;
//}
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    list* beg = make_list();
//    list* p = beg;
//    int change = find_last(beg);
//    cout << "\nСтарый список: ";
//    print(beg);
//    while (p != NULL)
//    {
//        if (p->info % 10 == 5) p->info =change;
//        p = p->next;
//    }
//    cout << "\nНовый список: ";
//    print(beg);
//}
//5. Вычислить max(X1 * Xn, X2 * Xn-1, ..., Xn/2 * Xn/2).
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//    list* prev;
//};
//list* make_list()
//{
//    list* beg = new(list);
//    list* p, *r;
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
//            r->prev = p;
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
//        cout << "\nElement: " << p->info;
//        p = p->next;
//    }
//}
//int find_max_product(list* beg)
//{
//}
