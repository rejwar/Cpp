class Child : public Parent {

    public: 
        void setId(int Id){
            id_protected = id;
        }
        void displayId() {
            cout << "Id_protected is : " << id_protected <<endl;
        }
}