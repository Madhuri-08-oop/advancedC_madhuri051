

                        // DMART PROJECT // 

# include<stdio.h>
int main()
{
    int product_id[7]={101,102,103,104,105,106,107};
    char product_name[7][30]={"groceries","clothes","footwear","milk product","home appliances","kitchen utensils","stationary"};
    int product_price[7]={35000,20000,15000,25000,56000,15000,5000};
    int product_quantity[7]={50,30,60,39,50,78,20};
    int product_offer[7]={30,10,10,20,10,5,5};
    int size=7;
    int choice;
    int index=-1;
    int qty,pid;
    int i, float_amount=0,discount=0,final_bill=0;
    do
    {
        printf("\n******************* DMART MENU ********************\n");
        printf("1.. VIEW INVENTORY\n");
        printf("2.. PURCHASE ITEMS\n");
        printf("3.. CHECKOUT\n ");
        printf("Enter your choice:");
        scanf("%d",&choice);

        while(choice<1 || choice>3)
        {
            printf("\n invalid choice!!!");
            printf("\n enter the correct choice:");
            scanf("%d",&choice);
        }

        if(choice==1)
        {
            printf("\nID\tNAME\tPRICE\tQTY\tOFFER\n");
            for(i=0;i<size;i++)
            {
                printf("%d\t%-15s\t%d\t%d\t%d%%\n",
                product_id[i],
                product_name[i],
                product_price[i],
                product_quantity[i],
                product_offer[i]);
            }
        }
        else if(choice==2)
        {
            index=-1;
            while(index==-1)
            {
                printf("\n enter product_id");
                scanf("%d",&pid);

                for(i=0;i<size;i++)
                {
                    if(product_id[i]==pid)
                    {
                        index=i;
                        break;
                    }
                }
                if(index==-1)
                {
                    printf("INCORRECT ID !!!! PLEASEE TRY AGAIN!!");
                }
            }
            printf("\n enter quantity: ");
            scanf("%d",&qty);
            if(qty>product_quantity[index])
            {
                printf("stocks not available");
                qty=0;
                index=-1;
            }
            else
            {
                product_quantity[index]-=qty;
                printf("added to your cart");
            }
        }
        else if(choice==3)
        {
            if(index==-1||qty<=0)
            {
                printf("no item purchased yet\n");
            }
            else
            {
                float amount,discount,final_bill;
                amount=product_price[index]*qty;
                discount=(amount*product_offer[index])/100;
                final_bill=amount-discount;
                printf("\n");
                printf("*************DMART INVOICE***************");

                printf("Product ID:   %d\n",  product_id[index]);
                printf("Product_name: %s\n",  product_name[index]);
                printf("Price:        %d\n",  product_price[i]);
                printf("Quantity:     %d\n",  qty);
                printf("Discount:     %.2f\n",discount);
                printf("\n*****************************************\n");
                printf("Final bill:%.2f\n",final_bill);

                printf("\n*******************************\n");
                printf("\nTHANK YOU FOR SHOPPING\n");
                printf("\n**********************************\n");
                index=-1;
                qty=0;
            }
        }
    }while(choice!=0);
    printf("\nHAVE A GREAT DAY\n");
    return 0;
}








        