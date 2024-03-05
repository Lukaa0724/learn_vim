               }
            }
            while(p->parent != NULL) 
            {
                p = p->parent;
                p->k11 = FindK(p, 1);
                p->k22 = FindK(p, 2);
                p->k33 = -1;
            }
            return p;
        }
    }
    return tree;
}
int main()
{
    int a;
    int b;
    for(int i = 0; i < 10; i++)
    {
        int tem = a;
        a = b;
        b= tem;
    }
    return 0;
}