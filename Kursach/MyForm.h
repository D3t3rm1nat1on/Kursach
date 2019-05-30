#pragma once
#include "Product_Bludo.h"

namespace Kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	void MarshalString(String ^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  textBox_login;
	private: System::Windows::Forms::TextBox^  textBox_password;


	private: System::Windows::Forms::Button^  button_login_chek;
	private: System::Windows::Forms::Label^  label_login_chek;
	private: System::Windows::Forms::GroupBox^  groupBox_login;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox_ProductList;

	private: System::Windows::Forms::CheckBox^  checkBox_passwordChar;
	private: System::Windows::Forms::ComboBox^  comboBox_BludoList;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::TextBox^  textBox_reqProduct;


	private: System::Windows::Forms::TextBox^  textBox_BludoName;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button_newBlud;
	private: System::Windows::Forms::ComboBox^  comboBox_ProductList_kolvo;
	private: System::Windows::Forms::Button^  button_Product_delete;
	private: System::Windows::Forms::Button^  button_Bludo_delete;
	private: System::Windows::Forms::TextBox^  textBox_reqProducts;

	private: System::Windows::Forms::Label^  label_reqProducts;
	private: System::Windows::Forms::Button^  button_Product_save;
	private: System::Windows::Forms::Button^  button_Products_load;
	private: System::Windows::Forms::Button^  button_Bluda_save;



	private: System::Windows::Forms::Button^  button_Bluda_load;
	private: System::Windows::Forms::GroupBox^  groupBox_Bluda;
	private: System::Windows::Forms::TextBox^  textBox_ProductName;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox_ProductKolvo;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::GroupBox^  groupBox_Products;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox_AdminPannel;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::RadioButton^  radioButton1;


	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ComboBox^  comboBox_launch;
	private: System::Windows::Forms::Button^  button_launch;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label_timer;







	private: System::ComponentModel::IContainer^  components;




	protected:

	protected:

	protected:




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox_login = (gcnew System::Windows::Forms::TextBox());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->button_login_chek = (gcnew System::Windows::Forms::Button());
			this->label_login_chek = (gcnew System::Windows::Forms::Label());
			this->groupBox_login = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_passwordChar = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox_ProductList = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_BludoList = (gcnew System::Windows::Forms::ComboBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox_reqProduct = (gcnew System::Windows::Forms::TextBox());
			this->textBox_BludoName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button_newBlud = (gcnew System::Windows::Forms::Button());
			this->comboBox_ProductList_kolvo = (gcnew System::Windows::Forms::ComboBox());
			this->button_Product_delete = (gcnew System::Windows::Forms::Button());
			this->button_Bludo_delete = (gcnew System::Windows::Forms::Button());
			this->textBox_reqProducts = (gcnew System::Windows::Forms::TextBox());
			this->label_reqProducts = (gcnew System::Windows::Forms::Label());
			this->button_Product_save = (gcnew System::Windows::Forms::Button());
			this->button_Products_load = (gcnew System::Windows::Forms::Button());
			this->button_Bluda_save = (gcnew System::Windows::Forms::Button());
			this->button_Bluda_load = (gcnew System::Windows::Forms::Button());
			this->groupBox_Bluda = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_ProductName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox_ProductKolvo = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox_Products = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_AdminPannel = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox_launch = (gcnew System::Windows::Forms::ComboBox());
			this->button_launch = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label_timer = (gcnew System::Windows::Forms::Label());
			this->groupBox_login->SuspendLayout();
			this->groupBox_Bluda->SuspendLayout();
			this->groupBox_Products->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox_AdminPannel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox_login
			// 
			this->textBox_login->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->textBox_login->Location = System::Drawing::Point(11, 39);
			this->textBox_login->Name = L"textBox_login";
			this->textBox_login->Size = System::Drawing::Size(135, 30);
			this->textBox_login->TabIndex = 1;
			this->textBox_login->Text = L"логин";
			// 
			// textBox_password
			// 
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->textBox_password->Location = System::Drawing::Point(11, 75);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(135, 30);
			this->textBox_password->TabIndex = 2;
			this->textBox_password->Text = L"пароль";
			// 
			// button_login_chek
			// 
			this->button_login_chek->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->button_login_chek->Location = System::Drawing::Point(11, 147);
			this->button_login_chek->Name = L"button_login_chek";
			this->button_login_chek->Size = System::Drawing::Size(135, 30);
			this->button_login_chek->TabIndex = 3;
			this->button_login_chek->Text = L"Войти";
			this->button_login_chek->UseVisualStyleBackColor = true;
			this->button_login_chek->Click += gcnew System::EventHandler(this, &MyForm::button_login_chek_Click);
			// 
			// label_login_chek
			// 
			this->label_login_chek->AutoSize = true;
			this->label_login_chek->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_login_chek->Location = System::Drawing::Point(25, 180);
			this->label_login_chek->Name = L"label_login_chek";
			this->label_login_chek->Size = System::Drawing::Size(88, 23);
			this->label_login_chek->TabIndex = 4;
			this->label_login_chek->Text = L"Ожидание";
			// 
			// groupBox_login
			// 
			this->groupBox_login->BackColor = System::Drawing::Color::DarkGray;
			this->groupBox_login->Controls->Add(this->checkBox_passwordChar);
			this->groupBox_login->Controls->Add(this->label_login_chek);
			this->groupBox_login->Controls->Add(this->button_login_chek);
			this->groupBox_login->Controls->Add(this->textBox_password);
			this->groupBox_login->Controls->Add(this->textBox_login);
			this->groupBox_login->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->groupBox_login->Location = System::Drawing::Point(8, 294);
			this->groupBox_login->Name = L"groupBox_login";
			this->groupBox_login->Size = System::Drawing::Size(162, 216);
			this->groupBox_login->TabIndex = 5;
			this->groupBox_login->TabStop = false;
			this->groupBox_login->Text = L"Админка";
			// 
			// checkBox_passwordChar
			// 
			this->checkBox_passwordChar->AutoSize = true;
			this->checkBox_passwordChar->Location = System::Drawing::Point(11, 112);
			this->checkBox_passwordChar->Name = L"checkBox_passwordChar";
			this->checkBox_passwordChar->Size = System::Drawing::Size(142, 27);
			this->checkBox_passwordChar->TabIndex = 5;
			this->checkBox_passwordChar->Text = L"скрыть пароль";
			this->checkBox_passwordChar->UseVisualStyleBackColor = true;
			this->checkBox_passwordChar->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_passwordChar_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14));
			this->label1->Location = System::Drawing::Point(340, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 26);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Ожидание";
			// 
			// comboBox_ProductList
			// 
			this->comboBox_ProductList->FormattingEnabled = true;
			this->comboBox_ProductList->Location = System::Drawing::Point(22, 21);
			this->comboBox_ProductList->Margin = System::Windows::Forms::Padding(2);
			this->comboBox_ProductList->Name = L"comboBox_ProductList";
			this->comboBox_ProductList->Size = System::Drawing::Size(109, 21);
			this->comboBox_ProductList->TabIndex = 8;
			this->comboBox_ProductList->Text = L"Продукты";
			this->comboBox_ProductList->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_ProductList_SelectedIndexChanged);
			// 
			// comboBox_BludoList
			// 
			this->comboBox_BludoList->FormattingEnabled = true;
			this->comboBox_BludoList->Location = System::Drawing::Point(135, 21);
			this->comboBox_BludoList->Margin = System::Windows::Forms::Padding(2);
			this->comboBox_BludoList->Name = L"comboBox_BludoList";
			this->comboBox_BludoList->Size = System::Drawing::Size(128, 21);
			this->comboBox_BludoList->TabIndex = 10;
			this->comboBox_BludoList->Text = L"Блюда";
			this->comboBox_BludoList->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_BludoList_SelectedIndexChanged);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(13, 46);
			this->maskedTextBox1->Mask = L"00000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(128, 20);
			this->maskedTextBox1->TabIndex = 11;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			// 
			// textBox_reqProduct
			// 
			this->textBox_reqProduct->Location = System::Drawing::Point(13, 72);
			this->textBox_reqProduct->Multiline = true;
			this->textBox_reqProduct->Name = L"textBox_reqProduct";
			this->textBox_reqProduct->Size = System::Drawing::Size(128, 138);
			this->textBox_reqProduct->TabIndex = 13;
			// 
			// textBox_BludoName
			// 
			this->textBox_BludoName->Location = System::Drawing::Point(13, 20);
			this->textBox_BludoName->Name = L"textBox_BludoName";
			this->textBox_BludoName->Size = System::Drawing::Size(128, 20);
			this->textBox_BludoName->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(146, 20);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Название блюда";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(146, 46);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 26);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Время готовки (такты)\r\nЗаполять все пропуски!";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(146, 86);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 52);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Список продуктов \r\nФормат:\r\nХлеб 2\r\nЯйцо 4";
			// 
			// button_newBlud
			// 
			this->button_newBlud->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->button_newBlud->Location = System::Drawing::Point(147, 144);
			this->button_newBlud->Name = L"button_newBlud";
			this->button_newBlud->Size = System::Drawing::Size(109, 66);
			this->button_newBlud->TabIndex = 18;
			this->button_newBlud->Text = L"создать новое блюдо";
			this->button_newBlud->UseVisualStyleBackColor = true;
			this->button_newBlud->Click += gcnew System::EventHandler(this, &MyForm::button_newBlud_Click);
			// 
			// comboBox_ProductList_kolvo
			// 
			this->comboBox_ProductList_kolvo->FormattingEnabled = true;
			this->comboBox_ProductList_kolvo->Location = System::Drawing::Point(22, 46);
			this->comboBox_ProductList_kolvo->Margin = System::Windows::Forms::Padding(2);
			this->comboBox_ProductList_kolvo->Name = L"comboBox_ProductList_kolvo";
			this->comboBox_ProductList_kolvo->Size = System::Drawing::Size(109, 21);
			this->comboBox_ProductList_kolvo->TabIndex = 19;
			this->comboBox_ProductList_kolvo->Text = L"кол-во";
			this->comboBox_ProductList_kolvo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_ProductList_kolvo_SelectedIndexChanged);
			// 
			// button_Product_delete
			// 
			this->button_Product_delete->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->button_Product_delete->ForeColor = System::Drawing::Color::Maroon;
			this->button_Product_delete->Location = System::Drawing::Point(22, 69);
			this->button_Product_delete->Name = L"button_Product_delete";
			this->button_Product_delete->Size = System::Drawing::Size(109, 68);
			this->button_Product_delete->TabIndex = 6;
			this->button_Product_delete->Text = L"Удалить\r\nпродукт";
			this->button_Product_delete->UseVisualStyleBackColor = true;
			this->button_Product_delete->Click += gcnew System::EventHandler(this, &MyForm::button_Product_delete_Click);
			// 
			// button_Bludo_delete
			// 
			this->button_Bludo_delete->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->button_Bludo_delete->ForeColor = System::Drawing::Color::Maroon;
			this->button_Bludo_delete->Location = System::Drawing::Point(22, 140);
			this->button_Bludo_delete->Name = L"button_Bludo_delete";
			this->button_Bludo_delete->Size = System::Drawing::Size(109, 70);
			this->button_Bludo_delete->TabIndex = 20;
			this->button_Bludo_delete->Text = L"Удалить\r\nБлюдо";
			this->button_Bludo_delete->UseVisualStyleBackColor = true;
			this->button_Bludo_delete->Click += gcnew System::EventHandler(this, &MyForm::button_Bludo_delete_Click);
			// 
			// textBox_reqProducts
			// 
			this->textBox_reqProducts->Location = System::Drawing::Point(135, 72);
			this->textBox_reqProducts->Multiline = true;
			this->textBox_reqProducts->Name = L"textBox_reqProducts";
			this->textBox_reqProducts->Size = System::Drawing::Size(128, 138);
			this->textBox_reqProducts->TabIndex = 21;
			this->textBox_reqProducts->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_reqProducts_KeyPress);
			// 
			// label_reqProducts
			// 
			this->label_reqProducts->AutoSize = true;
			this->label_reqProducts->Location = System::Drawing::Point(134, 49);
			this->label_reqProducts->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_reqProducts->Name = L"label_reqProducts";
			this->label_reqProducts->Size = System::Drawing::Size(129, 13);
			this->label_reqProducts->TabIndex = 22;
			this->label_reqProducts->Text = L"Необходимые продукты";
			// 
			// button_Product_save
			// 
			this->button_Product_save->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button_Product_save->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->button_Product_save->ForeColor = System::Drawing::Color::DarkGreen;
			this->button_Product_save->Location = System::Drawing::Point(6, 216);
			this->button_Product_save->Name = L"button_Product_save";
			this->button_Product_save->Size = System::Drawing::Size(130, 70);
			this->button_Product_save->TabIndex = 23;
			this->button_Product_save->Text = L"Сохранить продукты";
			this->button_Product_save->UseVisualStyleBackColor = false;
			this->button_Product_save->Click += gcnew System::EventHandler(this, &MyForm::button_Product_save_Click);
			// 
			// button_Products_load
			// 
			this->button_Products_load->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button_Products_load->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->button_Products_load->ForeColor = System::Drawing::Color::OrangeRed;
			this->button_Products_load->Location = System::Drawing::Point(142, 216);
			this->button_Products_load->Name = L"button_Products_load";
			this->button_Products_load->Size = System::Drawing::Size(109, 70);
			this->button_Products_load->TabIndex = 24;
			this->button_Products_load->Text = L"Загрузить продукты";
			this->button_Products_load->UseVisualStyleBackColor = false;
			this->button_Products_load->Click += gcnew System::EventHandler(this, &MyForm::button_Products_load_Click);
			// 
			// button_Bluda_save
			// 
			this->button_Bluda_save->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button_Bluda_save->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->button_Bluda_save->ForeColor = System::Drawing::Color::DarkGreen;
			this->button_Bluda_save->Location = System::Drawing::Point(13, 216);
			this->button_Bluda_save->Name = L"button_Bluda_save";
			this->button_Bluda_save->Size = System::Drawing::Size(128, 70);
			this->button_Bluda_save->TabIndex = 25;
			this->button_Bluda_save->Text = L"Сохранить блюда";
			this->button_Bluda_save->UseVisualStyleBackColor = false;
			this->button_Bluda_save->Click += gcnew System::EventHandler(this, &MyForm::button_Bluda_save_Click);
			// 
			// button_Bluda_load
			// 
			this->button_Bluda_load->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button_Bluda_load->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->button_Bluda_load->ForeColor = System::Drawing::Color::OrangeRed;
			this->button_Bluda_load->Location = System::Drawing::Point(149, 216);
			this->button_Bluda_load->Name = L"button_Bluda_load";
			this->button_Bluda_load->Size = System::Drawing::Size(109, 70);
			this->button_Bluda_load->TabIndex = 26;
			this->button_Bluda_load->Text = L"Загрузить блюда";
			this->button_Bluda_load->UseVisualStyleBackColor = false;
			this->button_Bluda_load->Click += gcnew System::EventHandler(this, &MyForm::button_Bluda_load_Click);
			// 
			// groupBox_Bluda
			// 
			this->groupBox_Bluda->BackColor = System::Drawing::Color::Silver;
			this->groupBox_Bluda->Controls->Add(this->button_Bluda_load);
			this->groupBox_Bluda->Controls->Add(this->button_Bluda_save);
			this->groupBox_Bluda->Controls->Add(this->button_newBlud);
			this->groupBox_Bluda->Controls->Add(this->label5);
			this->groupBox_Bluda->Controls->Add(this->label4);
			this->groupBox_Bluda->Controls->Add(this->label3);
			this->groupBox_Bluda->Controls->Add(this->textBox_BludoName);
			this->groupBox_Bluda->Controls->Add(this->textBox_reqProduct);
			this->groupBox_Bluda->Controls->Add(this->maskedTextBox1);
			this->groupBox_Bluda->Location = System::Drawing::Point(585, 102);
			this->groupBox_Bluda->Name = L"groupBox_Bluda";
			this->groupBox_Bluda->Size = System::Drawing::Size(286, 305);
			this->groupBox_Bluda->TabIndex = 27;
			this->groupBox_Bluda->TabStop = false;
			this->groupBox_Bluda->Text = L"Работа с блюдами";
			// 
			// textBox_ProductName
			// 
			this->textBox_ProductName->Location = System::Drawing::Point(6, 19);
			this->textBox_ProductName->Name = L"textBox_ProductName";
			this->textBox_ProductName->Size = System::Drawing::Size(128, 20);
			this->textBox_ProductName->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(139, 20);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Название продукта";
			// 
			// maskedTextBox_ProductKolvo
			// 
			this->maskedTextBox_ProductKolvo->Location = System::Drawing::Point(6, 43);
			this->maskedTextBox_ProductKolvo->Mask = L"00";
			this->maskedTextBox_ProductKolvo->Name = L"maskedTextBox_ProductKolvo";
			this->maskedTextBox_ProductKolvo->Size = System::Drawing::Size(128, 20);
			this->maskedTextBox_ProductKolvo->TabIndex = 27;
			this->maskedTextBox_ProductKolvo->ValidatingType = System::Int32::typeid;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(139, 49);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(135, 78);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Количество\r\nЗаполнять все пропуски!\r\nЕсли продукт уже\r\nимеется, то кол-во\r\nдобавл"
				L"яется к \r\nимеющемуся";
			// 
			// groupBox_Products
			// 
			this->groupBox_Products->BackColor = System::Drawing::Color::Silver;
			this->groupBox_Products->Controls->Add(this->pictureBox1);
			this->groupBox_Products->Controls->Add(this->button1);
			this->groupBox_Products->Controls->Add(this->textBox_ProductName);
			this->groupBox_Products->Controls->Add(this->label7);
			this->groupBox_Products->Controls->Add(this->button_Product_save);
			this->groupBox_Products->Controls->Add(this->maskedTextBox_ProductKolvo);
			this->groupBox_Products->Controls->Add(this->button_Products_load);
			this->groupBox_Products->Controls->Add(this->label6);
			this->groupBox_Products->Location = System::Drawing::Point(293, 102);
			this->groupBox_Products->Name = L"groupBox_Products";
			this->groupBox_Products->Size = System::Drawing::Size(286, 305);
			this->groupBox_Products->TabIndex = 28;
			this->groupBox_Products->TabStop = false;
			this->groupBox_Products->Text = L"Работа с продуктами";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 72);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 138);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
			this->button1->Location = System::Drawing::Point(142, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 66);
			this->button1->TabIndex = 27;
			this->button1->Text = L"добавить продукт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Silver;
			this->groupBox1->Controls->Add(this->button_Bludo_delete);
			this->groupBox1->Controls->Add(this->comboBox_ProductList);
			this->groupBox1->Controls->Add(this->comboBox_BludoList);
			this->groupBox1->Controls->Add(this->label_reqProducts);
			this->groupBox1->Controls->Add(this->comboBox_ProductList_kolvo);
			this->groupBox1->Controls->Add(this->textBox_reqProducts);
			this->groupBox1->Controls->Add(this->button_Product_delete);
			this->groupBox1->Location = System::Drawing::Point(1, 102);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(286, 305);
			this->groupBox1->TabIndex = 29;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Просмотр и взаимодействия";
			// 
			// groupBox_AdminPannel
			// 
			this->groupBox_AdminPannel->BackColor = System::Drawing::Color::DarkGray;
			this->groupBox_AdminPannel->Controls->Add(this->groupBox1);
			this->groupBox_AdminPannel->Controls->Add(this->groupBox_Bluda);
			this->groupBox_AdminPannel->Controls->Add(this->groupBox_Products);
			this->groupBox_AdminPannel->Controls->Add(this->label1);
			this->groupBox_AdminPannel->Location = System::Drawing::Point(176, 294);
			this->groupBox_AdminPannel->Name = L"groupBox_AdminPannel";
			this->groupBox_AdminPannel->Size = System::Drawing::Size(870, 413);
			this->groupBox_AdminPannel->TabIndex = 30;
			this->groupBox_AdminPannel->TabStop = false;
			this->groupBox_AdminPannel->Text = L"Админ панель";
			this->groupBox_AdminPannel->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(8, 511);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(161, 196);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 31;
			this->pictureBox2->TabStop = false;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 12);
			this->progressBar1->Maximum = 600;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(521, 71);
			this->progressBar1->TabIndex = 32;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(3, 7);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(61, 17);
			this->radioButton1->TabIndex = 33;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Ничего";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(3, 30);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(69, 17);
			this->radioButton2->TabIndex = 34;
			this->radioButton2->Text = L"Паприка";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(3, 53);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(80, 17);
			this->radioButton3->TabIndex = 35;
			this->radioButton3->Text = L"Чесночная";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(3, 76);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(74, 17);
			this->radioButton4->TabIndex = 36;
			this->radioButton4->Text = L"Кориандр";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton4);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(209, 185);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(99, 103);
			this->panel1->TabIndex = 37;
			// 
			// comboBox_launch
			// 
			this->comboBox_launch->FormattingEnabled = true;
			this->comboBox_launch->Location = System::Drawing::Point(313, 185);
			this->comboBox_launch->Margin = System::Windows::Forms::Padding(2);
			this->comboBox_launch->Name = L"comboBox_launch";
			this->comboBox_launch->Size = System::Drawing::Size(128, 21);
			this->comboBox_launch->TabIndex = 38;
			this->comboBox_launch->Text = L"Блюда";
			// 
			// button_launch
			// 
			this->button_launch->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->button_launch->Location = System::Drawing::Point(313, 215);
			this->button_launch->Name = L"button_launch";
			this->button_launch->Size = System::Drawing::Size(128, 73);
			this->button_launch->TabIndex = 39;
			this->button_launch->Text = L"Приготовить";
			this->button_launch->UseVisualStyleBackColor = true;
			this->button_launch->Click += gcnew System::EventHandler(this, &MyForm::button_launch_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14));
			this->label2->Location = System::Drawing::Point(234, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 26);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Ожидание";
			// 
			// label_timer
			// 
			this->label_timer->AutoSize = true;
			this->label_timer->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14));
			this->label_timer->Location = System::Drawing::Point(254, 86);
			this->label_timer->Name = L"label_timer";
			this->label_timer->Size = System::Drawing::Size(40, 26);
			this->label_timer->TabIndex = 41;
			this->label_timer->Text = L"0%";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->label_timer);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_launch);
			this->Controls->Add(this->comboBox_launch);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->groupBox_AdminPannel);
			this->Controls->Add(this->groupBox_login);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox_login->ResumeLayout(false);
			this->groupBox_login->PerformLayout();
			this->groupBox_Bluda->ResumeLayout(false);
			this->groupBox_Bluda->PerformLayout();
			this->groupBox_Products->ResumeLayout(false);
			this->groupBox_Products->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox_AdminPannel->ResumeLayout(false);
			this->groupBox_AdminPannel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Проверка логина и пароля для админ панели
	private: System::Void button_login_chek_Click(System::Object^  sender, System::EventArgs^  e)
	{
		using namespace System::IO;
		try {
			StreamReader ^file = gcnew StreamReader("Admin.txt");
			String ^login, ^password;
			login = file->ReadLine();
			password = file->ReadLine();
			if (textBox_login->Text == login && textBox_password->Text == password)
			{
				label_login_chek->Text = "Успешно";
				groupBox_AdminPannel->Visible = true;
			}
			else
			{
				label_login_chek->Text = "Ошибка";
				groupBox_AdminPannel->Visible = false;
			}
			file->Close();
		}
		catch (...) {
			MessageBox::Show("Не могу открыть Admin.txt");
		}
	}
			 //Стартовые настройки
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{

		ofstream file("file_initial.bin", ios::binary);
		Product temp1("Курица", 1);		// 1
		products.push_back(temp1);
		temp1.write(file);
		Product temp2("Картошка", 2);	// 2
		products.push_back(temp2);
		temp2.write(file);
		Product temp3("Мясо", 3);		// 3
		products.push_back(temp3);
		temp3.write(file);
		Product temp4("Капуста", 4);	// 4
		products.push_back(temp4);
		temp4.write(file);
		Product temp5("Творог", 5);		// 5
		products.push_back(temp5);
		temp5.write(file);
		Product temp6("Грибы", 6);		// 6
		products.push_back(temp6);
		temp6.write(file);
		Product temp7("Помидоры", 7);	// 7
		products.push_back(temp7);
		temp7.write(file);
		Product temp8("Яблоко", 8);		// 8
		products.push_back(temp8);
		temp8.write(file);
		Product temp9("Свинина", 9);	// 9
		products.push_back(temp9);
		temp9.write(file);
		Product temp10("Молоко", 10);	// 10
		products.push_back(temp10);
		temp10.write(file);
		Product temp11("Сыр", 2);		// 11
		products.push_back(temp11);
		temp11.write(file);
		Product temp12("Рыба", 3);		// 12
		products.push_back(temp12);
		temp12.write(file);
		Product temp13("Кабачки", 4);	// 13
		products.push_back(temp13);
		temp13.write(file);
		Product temp14("Яйца", 8);		// 14
		products.push_back(temp14);
		temp14.write(file);
		Product temp15("Огурцы", 1);	// 15
		products.push_back(temp15);
		temp15.write(file);
		Product temp16("Фарш", 1);		// 16
		products.push_back(temp16);
		temp16.write(file);
		Product temp17("Рис", 7);		// 17
		products.push_back(temp17);
		temp17.write(file);
		Product temp18("Говядина", 5);	// 18
		products.push_back(temp18);
		temp18.write(file);
		Product temp19("Кефир", 2);		// 19
		products.push_back(temp19);
		temp19.write(file);
		Product temp20("Печень", 1);	// 20
		products.push_back(temp20);
		temp20.write(file);
		file.close();

		Product temp;
		ifstream file2("file_initial.bin", ios::binary);
		while (file2.peek() != EOF)
		{
			temp.read(file2);
			comboBox_ProductList->Items->Add(gcnew System::String(temp.get_name().c_str()));
			comboBox_ProductList_kolvo->Items->Add(temp.get_kolvo());
		}
		file2.close();

		/*
		Bludo b_temp;
		ifstream file3("Bluda.bin", ios::binary);
		while (file3.peek() != EOF)
		{
			b_temp.read(file3);
			comboBox_BludoList->Items->Add(gcnew System::String(b_temp.get_name().c_str()));

		}
		file3.close();
		*/
	}
			 //Скрытый ввод пароля
	private: System::Void checkBox_passwordChar_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox_passwordChar->Checked)
			textBox_password->UseSystemPasswordChar = true;
		else
			textBox_password->UseSystemPasswordChar = false;
	}
			 //Создание нового блюда
	private: System::Void button_newBlud_Click(System::Object^  sender, System::EventArgs^  e)
	{
		String ^c_name = textBox_BludoName->Text;
		if (c_name == "")
		{
			label1->Text = "Поле не заполнено: имя";
			return;
		}
		int n = comboBox_BludoList->Items->Count;
		for (int i = 0; i < n; i++)
		{
			String ^s = comboBox_BludoList->Items[i]->ToString();
			if (c_name == s)
			{
				label1->Text = "Такое блюдо уже существует";
				return;
			}
		}
		string name;
		MarshalString(c_name, name);
		int cooking_time = Int32::Parse(maskedTextBox1->Text);
		Bludo temp(cooking_time, name);
		n = textBox_reqProduct->Lines->Length;
		string str;
		for (int i = 0; i < n; i++)
		{
			String ^c_str = textBox_reqProduct->Lines[i]->ToString();
			MarshalString(c_str, str);
			int indx = str.find(" ");
			string p_name = str.substr(0, indx);
			str.erase(0, indx);
			int kolvo = stoi(str);
			Product p_temp;
			p_temp.change_name(p_name);
			p_temp.change_kolvo(kolvo);
			temp.list.push_back(p_temp);
		}
		String^ b_name = gcnew System::String(name.c_str());
		comboBox_BludoList->Items->Add(b_name);
		comboBox_launch->Items->Add(b_name);
		bluda.push_back(temp);
		label1->Text = "Блюдо: " + b_name + " успешно добавлено";
	}
			 // Связь комбобоксов с именем и количеством продуктов
	private: System::Void comboBox_ProductList_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		int indx = comboBox_ProductList->SelectedIndex;
		comboBox_ProductList_kolvo->Text = comboBox_ProductList_kolvo->Items[indx]->ToString();
	}
			 // Связь комбобоксов с именем и количеством продуктов	
	private: System::Void comboBox_ProductList_kolvo_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		int indx = comboBox_ProductList->SelectedIndex;
		comboBox_ProductList_kolvo->Text = comboBox_ProductList_kolvo->Items[indx]->ToString();
	}
			 //Удаление выбранного продукта	
	private: System::Void button_Product_delete_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int indx = comboBox_ProductList->SelectedIndex;
		if (indx == -1)
		{
			label1->Text = "Выберите продукт для удаления";
			return;
		}
		label1->Text = "Удалён продукт: " + gcnew System::String(products[indx].get_name().c_str());
		products.erase(products.begin() + indx);
		comboBox_ProductList->Items->RemoveAt(indx);
		comboBox_ProductList_kolvo->Items->RemoveAt(indx);
		comboBox_ProductList->Text = "Продукт";

	}
			 //Удаление выбранного блюда
	private: System::Void button_Bludo_delete_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int indx = comboBox_BludoList->SelectedIndex;
		if (indx == -1)
		{
			label1->Text = "Выберите продукт для удаления";
			return;
		}
		label1->Text = "Удалено блюдо: " + gcnew System::String(bluda[indx].get_name().c_str());
		bluda.erase(bluda.begin() + indx);
		comboBox_BludoList->Items->RemoveAt(indx);
		comboBox_launch->Items->RemoveAt(indx);

		if (comboBox_BludoList->Items->Count == 0)
		{
			comboBox_launch->Text = "Блюдо";
			comboBox_BludoList->Text = "Блюдо";
			textBox_reqProducts->Text = "";
		}
	}
			 //Запрет на изменение информации в окне с необходимыми продуктами
	private: System::Void textBox_reqProducts_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		e->Handled = true;
	}
			 //Смена списка продуктов под каждое блюдо
	private: System::Void comboBox_BludoList_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (comboBox_BludoList->SelectedIndex == -1)
		{
			return;
		}
		textBox_reqProducts->Text = "";

		int indx = comboBox_BludoList->SelectedIndex;
		int n = bluda[indx].list.size();
		label1->Text = "" + n;
		for (int i = 0; i < n; i++)
		{
			string name = bluda[indx].list[i].get_name();
			String ^req_name = gcnew System::String(name.c_str());
			int req_kolvo = bluda[indx].list[i].get_kolvo();
			textBox_reqProducts->Text += req_name + " " + req_kolvo + "\r\n";
		}
	}
			 //Сохранение продуктов
	private: System::Void button_Product_save_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (products.size() == 0)
		{
			label1->Text = "Вам нечего сохранять";
			return;
		}
		ofstream file("Products.bin", ios::binary);
		int n = products.size();
		for (int i = 0; i < n; i++)
		{
			products[i].write(file);
		}
		file.close();
		label1->Text = "Список продуктов успешно сохранен";
	}
			 //Загрузка продуктов
	private: System::Void button_Products_load_Click(System::Object^  sender, System::EventArgs^  e)
	{
		products.clear();
		comboBox_ProductList->Items->Clear();
		comboBox_ProductList_kolvo->Items->Clear();
		Product temp;
		ifstream file("Products.bin", ios::binary);
		if (!file.is_open())
		{
			label1->Text = "Список продуктов не найден";
			return;
		}
		while (file.peek() != EOF)
		{
			temp.read(file);
			products.push_back(temp);
			comboBox_ProductList->Items->Add(gcnew System::String(temp.get_name().c_str()));
			comboBox_ProductList_kolvo->Items->Add(temp.get_kolvo());
		}
		file.close();
		label1->Text = "Список продуктов успешно загружен";
	}
			 //Сохранение блюд
	private: System::Void button_Bluda_save_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (bluda.size() == 0)
		{
			label1->Text = "Вам нечего сохранять";
			return;
		}
		ofstream file("Bluda.bin", ios::binary);
		int n = bluda.size();
		label1->Text = "";
		for (int i = 0; i < n; i++)
		{
			bluda[i].write(file);
			label1->Text += " " + bluda[i].list.size();
		}
		file.close();
		label1->Text = "Список блюд успешно сохранен";
	}
			 //Загрузка блюд	
	private: System::Void button_Bluda_load_Click(System::Object^  sender, System::EventArgs^  e)
	{
		bluda.clear();
		comboBox_BludoList->Items->Clear();
		comboBox_launch->Items->Clear();
		ifstream file("Bluda.bin", ios::binary);
		if (!file.is_open())
		{
			label1->Text = "Список блюд не найден";
			return;
		}
		while (file.peek() != EOF)
		{
			Bludo temp1;
			temp1.read(file);
			bluda.push_back(temp1);
			comboBox_BludoList->Items->Add(gcnew System::String(temp1.get_name().c_str()));
			comboBox_launch->Items->Add(gcnew System::String(temp1.get_name().c_str()));
		}
		comboBox_BludoList->Text = "Блюдо";
		comboBox_launch->Text = "Блюдо";
		textBox_reqProducts->Text = "";
		file.close();
		label1->Text = "Список блюд успешно загружен";
	}
			 //Добавление продукта
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		String ^c_name = textBox_ProductName->Text;
		if (c_name == "")
		{
			label1->Text = "Поле не заполнено: имя";
			return;
		}
		int kolvo1 = Int32::Parse(maskedTextBox_ProductKolvo->Text);
		int n = comboBox_ProductList->Items->Count;
		for (int i = 0; i < n; i++)
		{
			String ^s = comboBox_ProductList->Items[i]->ToString();
			if (c_name == s)
			{
				int kolvo2 = Int32::Parse(comboBox_ProductList_kolvo->Items[i]->ToString());
				label1->Text = "Увеличение количества продукта: " + c_name;
				products[i].add_kolvo(kolvo2);
				comboBox_ProductList_kolvo->Items[i] = kolvo1 + kolvo2;
				return;
			}
		}
		Product temp;
		string name;
		MarshalString(c_name, name);
		label1->Text = "Успешное добавление продукта: " + c_name;
		temp.change_name(name);
		temp.change_kolvo(kolvo1);
		products.push_back(temp);
		comboBox_ProductList->Items->Add(c_name);
		comboBox_ProductList_kolvo->Items->Add(kolvo1);
	}
	
			 
			 String^ gotovka;
	private: System::Void button_launch_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (progressBar1->Value == progressBar1->Maximum)
			progressBar1->Value = 0;
		if (progressBar1->Value != 0)
		{
			label2->Text = "Дождитесь окончания процесса";
			return;
		}
		gotovka = comboBox_launch->Text;
		int indx = comboBox_launch->SelectedIndex;
		if (indx == -1)
			return;
		int n = bluda[indx].list.size();
		int m = products.size();
		for (int i = 0; i < n; i++)
		{
			bool flag = false;
			for (int j = 0; j < m; j++)
				if (bluda[indx].list[i].get_name() == products[j].get_name())
					if (bluda[indx].list[i].get_kolvo() <= products[j].get_kolvo())
						flag = true;
			if (!flag)
			{
				label2->Text = "Недостаточно продуктов";
				return;
			}
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				if (bluda[indx].list[i].get_name() == products[j].get_name())
				{
					comboBox_ProductList_kolvo->Items[j] = products[j].get_kolvo() - bluda[indx].list[i].get_kolvo();
					products[j].add_kolvo(-bluda[indx].list[i].get_kolvo());
				}
		}

		label2->Text = "Ожидайте";
		progressBar1->Maximum = bluda[comboBox_launch->SelectedIndex].get_time();
		timer1->Start();
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		if (progressBar1->Value != progressBar1->Maximum)
			progressBar1->Value += 1;
		else
		{
			timer1->Stop();
			label2->Text = "Блюдо: " + gotovka;
			if (radioButton2->Checked)
				label2->Text += " c паприкой";
			if (radioButton3->Checked)
				label2->Text += " c чесноком";
			if (radioButton4->Checked)
				label2->Text += " c кориандром";
			label2->Text += " готово";
		}
		label_timer->Text = "" + progressBar1->Value + " / " + progressBar1->Maximum;
	}

};
}