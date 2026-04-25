using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bank_Account
{
    public class BankAccount
    {
        private int Id;
        private string OwnerName;
        private double Balance;
        private static int TotalAccount = 0;

        public int GetId() { return Id; }
        public string GetOwnerName() { return OwnerName; }
        public double GetBalance() { return Balance; }

        public void SetId(int id) { Id = id; }
        public void SetOwnerName(string ownername) { OwnerName = ownername; }
        public BankAccount()
        {
            Balance = 3200;
            TotalAccount++;
        }
        public void Deposite(double amount)
        {
            if (amount > 0)
            {
                Balance = Balance + amount;
                Console.WriteLine($"[Deposite]: Hesaba {amount} Azn əlavə olundu.");
            }
        }
        public void Withdraw(double amount)
        {
            if (amount > 0 && Balance >= amount)
            {
                Balance = Balance - amount;
                Console.WriteLine($"[Withdraw]: Hesabdan {amount} Azn çıxıldı.");
            }
            else
            {
                Console.WriteLine("Balansdda yetərli vəsait yoxdur :");
            }
        }
        public void Transfer(BankAccount targetAccount, double amount)
        {
            if (amount > 0 & Balance >= amount)
            {
                this.Withdraw(amount);
                targetAccount.Deposite(amount);
                Console.WriteLine($"[Transfer]: Hesabdan {amount} Azn transfer olundu.");
            }
        }
        public void GetInfo()
        {
            Console.WriteLine("Name: " + OwnerName + " / Balance: " + Balance);
        }
    }
    public class DataBase
    {
        private List<BankAccount> accounts = new List<BankAccount>();
        public void Add(BankAccount account)
        {
            accounts.Add(account);
        }
        public BankAccount FindById(int id)
        {
            foreach (BankAccount a in accounts)
            {
                if (a.GetId() == id)
                {
                    return a;
                }
            }
            return null;
        }
        public void RemoveById(int id)
        {
            BankAccount found = null;
            foreach (BankAccount p in accounts)
            {
                found = p;
                break;
            }
            if (found != null)
            {
                accounts.Remove(found);
            }
        }
        public List<BankAccount> GetAll()
        {
            return accounts;
        }
        public int Count()
        {
            return accounts.Count;
        }
    }
    public class Program
    {
        static void Main(string[] args)
        {
            DataBase db = new DataBase();
            BankAccount b1 = new BankAccount();
            b1.SetId(1);
            b1.SetOwnerName("Məmmədağa");
            b1.Deposite(500);
            b1.Withdraw(200);

            BankAccount b2 = new BankAccount();
            b2.SetId(2);
            b2.SetOwnerName("Receb");
            b1.Transfer(b2, 100);
            db.Add(b1);
            db.Add(b2);
            BankAccount found = db.FindById(1);
            found.GetInfo();
        }
    }
}
