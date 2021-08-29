using System;
using System.Collections.Generic;

namespace AbstractTest
{
    class Program
    {
        static void Main(string[] args)
        {
            string ltext = System.IO.File.ReadAllText(@"C:\Users\Chand\Desktop\Microchip\v00.05.10.05\Readme.txt");
            Console.WriteLine("Textfile contains the following texts : {0}", ltext);
            Chair lold = new Chair("Red", 400);

            Car l1 = new Car("rrr", "R9");


            Car lVehicle = new Car("Drrrrrrrrrrrrr","R8");
            lVehicle.lDestroyable.Add(lold); //##Add "lold" object from Chair class to lVehicle to access the another class Car 
            lVehicle.lDestroyable.Add(l1);
            lVehicle.Destroy();
        }
        
    }
    public interface IDestroyable
    {
            public string DestructionSound { get; set; }

            public void Destroy();

    }
    public class Furniture
    {
        public string Color { get; set; }

        public int Price { get; set; }
    }

    public class Vehicle
    {
        public string Model { get; set; }
        public Vehicle(string lModel)
        {
            this.Model = lModel;
        }
    }
    public class  Chair : Furniture, IDestroyable
    {
            public string DestructionSound { get; set; }
        
            public Chair(string lColor, int lPrice)
            {
                this.DestructionSound = "Crack";
                this.Color = lColor;
                this.Price = lPrice;
            }
            public void Destroy()
            {
                Console.WriteLine("Destroy Chair!!");
            }
            
    }

    public class Car : Vehicle, IDestroyable
    {
            public List<IDestroyable> lDestroyable;
            public string DestructionSound { get; set; }
            public Car(string lSound, string lModel) : base(lModel)
            {
                this.DestructionSound = lSound;
                this.lDestroyable = new List<IDestroyable>();
            }

            public void Destroy()
            {
                Console.WriteLine("the Car model {0} is destroyed by producing  {1} noise!!",this.Model, this.DestructionSound);
                foreach (IDestroyable lidestroyable in this.lDestroyable)
                    {
                        lidestroyable.Destroy();
                    }
            }

    }


    
}
