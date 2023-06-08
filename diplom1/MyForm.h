#pragma once

namespace diplom1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::CheckBox^ vanillaCheckbox;
	protected:
	private: System::Windows::Forms::CheckBox^ coconutCheckbox;

	private: System::Windows::Forms::TextBox^ servingsTextbox;
	private: System::Windows::Forms::Button^ calculateButton;
	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::CheckBox^ ChocolateCheckbox;
	private: System::Windows::Forms::CheckBox^ banancheckbox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label4;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->vanillaCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->coconutCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->servingsTextbox = (gcnew System::Windows::Forms::TextBox());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->ChocolateCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->banancheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// vanillaCheckbox
			// 
			this->vanillaCheckbox->AutoSize = true;
			this->vanillaCheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vanillaCheckbox->Location = System::Drawing::Point(97, 210);
			this->vanillaCheckbox->Name = L"vanillaCheckbox";
			this->vanillaCheckbox->Size = System::Drawing::Size(112, 24);
			this->vanillaCheckbox->TabIndex = 0;
			this->vanillaCheckbox->Text = L"Ванильное";
			this->vanillaCheckbox->UseVisualStyleBackColor = true;
			// 
			// coconutCheckbox
			// 
			this->coconutCheckbox->AutoSize = true;
			this->coconutCheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->coconutCheckbox->Location = System::Drawing::Point(97, 116);
			this->coconutCheckbox->Name = L"coconutCheckbox";
			this->coconutCheckbox->Size = System::Drawing::Size(108, 24);
			this->coconutCheckbox->TabIndex = 1;
			this->coconutCheckbox->Text = L"Кокосовое";
			this->coconutCheckbox->UseVisualStyleBackColor = true;
			// 
			// servingsTextbox
			// 
			this->servingsTextbox->Location = System::Drawing::Point(17, 294);
			this->servingsTextbox->Name = L"servingsTextbox";
			this->servingsTextbox->Size = System::Drawing::Size(141, 20);
			this->servingsTextbox->TabIndex = 3;
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(17, 371);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(141, 52);
			this->calculateButton->TabIndex = 4;
			this->calculateButton->Text = L"Расчет";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &MyForm::calculateButton_Click);
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultLabel->Location = System::Drawing::Point(15, 15);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(168, 16);
			this->resultLabel->TabIndex = 5;
			this->resultLabel->Text = L"_______________________";
			// 
			// ChocolateCheckbox
			// 
			this->ChocolateCheckbox->AutoSize = true;
			this->ChocolateCheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChocolateCheckbox->Location = System::Drawing::Point(296, 116);
			this->ChocolateCheckbox->Name = L"ChocolateCheckbox";
			this->ChocolateCheckbox->Size = System::Drawing::Size(124, 24);
			this->ChocolateCheckbox->TabIndex = 6;
			this->ChocolateCheckbox->Text = L"Шоколадное";
			this->ChocolateCheckbox->UseVisualStyleBackColor = true;
			// 
			// banancheckbox
			// 
			this->banancheckbox->AutoSize = true;
			this->banancheckbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->banancheckbox->Location = System::Drawing::Point(296, 210);
			this->banancheckbox->Name = L"banancheckbox";
			this->banancheckbox->Size = System::Drawing::Size(111, 24);
			this->banancheckbox->TabIndex = 7;
			this->banancheckbox->Text = L"Банановое";
			this->banancheckbox->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"1. Выберите вкус мороженого";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 261);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(337, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"2. Введите необходимое количество порций";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 337);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 15);
			this->label3->TabIndex = 10;
			this->label3->Text = L"3. Нажмите \"расчет\"";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox5);
			this->groupBox1->Controls->Add(this->resultLabel);
			this->groupBox1->Location = System::Drawing::Point(421, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(216, 388);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Результат";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(136, 302);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(74, 86);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(211, 61);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(79, 79);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(211, 155);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(79, 79);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 16;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(12, 155);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(79, 79);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 17;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 61);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(79, 79);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 18;
			this->pictureBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(89, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(422, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Программа  расчета ингредиентов для приготовления порционного мороженого ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(649, 430);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->banancheckbox);
			this->Controls->Add(this->ChocolateCheckbox);
			this->Controls->Add(this->calculateButton);
			this->Controls->Add(this->servingsTextbox);
			this->Controls->Add(this->coconutCheckbox);
			this->Controls->Add(this->vanillaCheckbox);
			this->Name = L"MyForm";
			this->Text = L"Мороженое 1 группа";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calculateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get number of servings from textbox
		int numServings = Int32::Parse(servingsTextbox->Text);

		// Calculate ingredients based on selected checkboxes and number of servings
		String^ result = "";
		if (vanillaCheckbox->Checked) {
			int eggs = 3 * numServings;
			int cream = 400 * numServings;
			int fructose = 40 * numServings;
			int vanillin = numServings;
			result += "Ванильное мороженое:\n";
			result += "- куриные яйца: " + eggs + " упак.\n";
			result += "- сливки 33%: " + cream + " мл.\n";
			result += "- фруктоза: " + fructose + " г.\n";
			result += "- ванилин: " + vanillin + " упак.\n\n";
		}
		if (coconutCheckbox->Checked) {
			int coconutCream = 400 * numServings;
			int coconutMilk = 300 * numServings;
			int fructose = 80 * numServings;
			int yolk = 3 * numServings;
			result += "Кокосовое мороженое:\n";
			result += "- кокосовые сливки: " + coconutCream + " мл.\n";
			result += "- кокосовое молоко: " + coconutMilk + " мл.\n";
			result += "- фруктоза: " + fructose + " г.\n";
			result += "- желтки: " + yolk + " шт.\n\n";
		}
		if (ChocolateCheckbox->Checked) {
			int chocolate = 133 * numServings;
			int milk = 233 * numServings;
			int cream = 167 * numServings;
			int sugar = 66.5 * numServings;
			int yolk = 2.7 * numServings;
			result += "Шоколадное мороженое:\n";
			result += "- шоколад " + chocolate + " г.\n";
			result += "- молоко: " + milk + " мл.\n";
			result += "- сливки 33%: " + cream + " мл.\n";
			result += "- сахар: " + sugar + " г.\n";
			result += "- желтки: " + yolk + " шт.\n\n";
		}
		if (banancheckbox->Checked) {
			int Cream = 400 * numServings;
			int sugarpowder = 60 * numServings;
			int banana = 6 * numServings;
			result += "Банановое мороженое:\n";
			result += "- сливки 33%: " + Cream + " мл.\n";
			result += "- сахарная пудра : " + sugarpowder + " г.\n";
			result += "- банан: " + banana + " шт.\n\n";
		}

		// Display result in label
		resultLabel->Text = result;
	}
};
}
