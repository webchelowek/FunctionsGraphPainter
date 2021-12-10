#pragma once
#include "Math.h"
#include <string>

namespace Cursed {

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::ComponentModel::IContainer^ components;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"F(x)";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(567, 572);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(585, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(275, 572);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Входные данные";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(6, 223);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(265, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"(по умолчанию рисуется график y=x)";
			this->label7->UseMnemonic = false;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(5, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(265, 32);
			this->label5->TabIndex = 9;
			this->label5->Text = L"(по умолчанию 0,01, рекомендованный диапазон: 0,01-1)";
			this->label5->UseMnemonic = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(7, 166);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(262, 22);
			this->textBox3->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(5, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(214, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Введите скорость графика:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(5, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(265, 32);
			this->label3->TabIndex = 5;
			this->label3->Text = L"(по умолчанию 15)";
			this->label3->UseMnemonic = false;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox2->Location = System::Drawing::Point(7, 246);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(262, 22);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 206);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите уравнение графика:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(7, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(5, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(265, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите правую границу графика:";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(7, 515);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Нарисовать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(872, 596);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->MinimumSize = System::Drawing::Size(600, 600);
			this->Name = L"MyForm";
			this->Text = L"Графики функций";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		static double count = 0; //счётчик срабатываний таймера
		static double end; //граница
		

		bool countprotect() {			//проверка на правильность ввода скорости построения графика
			if ((textBox3->Text->Length == 0)) { return false; }

			for (int i = 0; i < textBox3->Text->Length; i++) {
				if ((textBox3->Text[i] >= '0') && (textBox3->Text[i] <= '9') || (textBox3->Text[i] == ',')) {}
				else {
					this->label5->Text = "Вы ввели неверное значение, скорость равна 0,01";
					return false;
				}
			}

			return true;
		}

		bool endprotect() {          //проверка на правильность ввода границы по X
			if ((textBox1->Text->Length == 0)) { return false; }

			for (int i = 0; i < textBox1->Text->Length; i++) {
				if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9') || (textBox1->Text[i] == ',')) {}
				else {
					this->label3->Text = "Вы ввели неверное значение, граница равна 15";
					return false;
				}
			}

			return true;
		}

		bool funcprotect() {	 //проверка на правильность ввода самой функции
			if ((textBox2->Text->Length == 0)) { return false; }

			for (int i = 0; i < textBox2->Text->Length; i++) {
				if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9')  //проверка заключается в итерации строки посимвольно и поиск "неправильных" символов
					||  textBox2->Text[i] == 'x' ||
					    textBox2->Text[i] == ',' ||
						textBox2->Text[i] == '/' ||
						textBox2->Text[i] == '*' ||
						textBox2->Text[i] == '^' ||
						textBox2->Text[i] == '+' ||
						textBox2->Text[i] == '-'){}
				else {
					this->label7->Text = "Вы ввели неверное значение, график y=x";
					return false;
				}
			}

			return true;
		}

		private: double multi(int l, int i, int j, double numb, double numbers[50], String^ operations) {		//функция которая высчитывает каждый одночлен функции отдельно
			for (int k = j; k < i + 1; k++) {
				
				numb = numbers[k + l];				//если одночлен состоит из одного числа/символа то ничего считать не нужно
				if (operations[k] == '/') {			//если присутствует деление - делит последующий символ на предыдущий, выполняя проверку на ноль
					if (numbers[k + 1] == 0) {
						continue;
					}
					numb = numbers[k] / numbers[k + 1];
					numbers[k + 1 - l] = numb;		//переписывает каждый множитель одночлена в массиве, "передвигая" его к следующему множителю
				}
				if (operations[k] == '*') {			//тоже самое что и с делением, но умножение
					numb = numbers[k] * numbers[k + 1];
					numbers[k + 1 - l] = numb;
				}
				if (operations[k] == '^') {			//тоже самое что и с делением, но cтепень
					numb = pow(numbers[k], numbers[k + 1]);
					numbers[k + 1 - l] = numb;
				}
			}
			return numb;							//возвращает одночлен
		}

		private:  double f(double x) { //конкретная функция, которую рисуем, в качестве аргумента передаётся счётчик таймера

			if (funcprotect()) {					//проверка на корректный ввод

				double numbers[50];				   //массив, в котором будут храниться числа из функции
				String^ str = this->textBox2->Text;//строка, хранящая функцию
				String^ substr = "";			//вспомогательные переменные
				String^ operations = "";
				int g = 0;
				for (int i = 0; i < str->Length; i++) {//итерация по каждому символу функции
					if (str[i] == 'x') {			//если встречается сам Х, то он записывается в числовой массив
						numbers[g] = x;				
						g++;
					}
					else if ((str[i] >= '0') && (str[i] <= '9') || (str[i] == ',')) { //в спомогательную строку записываются все цифры и запятая, чтобы потом объединить их в число double
						substr += str[i];
					}
					else {							//в строку операций записываются операции
						if (str[i] == '/' ||
							str[i] == '*' ||
							str[i] == '^' ||
							str[i] == '+' ||
							str[i] == '-'
						   ) {
							operations += str[i];
						}
						if (substr != "") {		//в конце итерации, если подстрока чисел не пустая, она записывается в числовой массив и очищается
							numbers[g] = Convert::ToDouble(substr);
							substr = "";
							g++;
						}
					}
					if (i == str->Length - 1) {//на последней итерации выполняется тоже самое (на самом деле не помню зачем это, но без этого вроде не работает :-) )
						if (substr != "") {
							numbers[g] = Convert::ToDouble(substr);
							substr = "";
							g++;
						}
					}
				}

				double numb = numbers[0];  //переменная, которую будет возвращать эта функция, сразу записываем в нее первое значение числового массива, чтоб в ней не хранился мусор
				char terms[50];			//переменная которая будет хранить + и - (т.к. в дальнейшем нужно будет все посчитанные одночлены складывать в многочлен)
				double numbs[50];		//вспомогательный массив чисел и переменная для него
				int m = 0;
				for (int i = 0, j = 0; i < operations->Length; i++) { //итерируем массив операций, находим там + и -, считаем одночлен
					if (operations[i] == '+' || operations[i] == '-') {
						terms[m] = operations[i];				
						numbs[m] = multi(0,i,j,numb,numbers,operations);
						j = i;
						m++;
					}

					if (i == operations->Length - 1) {				//тоже самое и на последней операции, но с корректировками (т.к. тут уже не будет следующей операции и нужно внести некие корректировки)
						numbs[m] = multi(1, i, j, numb, numbers, operations);
					}
				}

				numb = 0;								//обнуляем возвращаемое число функции (т.к. там хранился последний одночлен)
				for (int i = 0; i <= m; i++) {			//осталось сложить одночлены в многочлен
					if (terms[i] == '+') {
						numb += numbs[i] + numbs[i + 1];
					}

					else if (terms[i] == '-') {
						numb += numbs[i] - numbs[i + 1];
					}
					else if (m == 0){
						numb = numbers[0];
					}
				}

				double y = numb;					//numb тут это уже посчитанное значение функции при данном x
				return Double::IsNaN(y) ? 0 : y;	//возвращаем его, делая еще одну проверку (на всякий случай)

			}
			return x;								//если проверка в самом начале не пройдена, просто возвращаем х (т.к. по умолчанию рисуется y=x)
		}



		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //клик на кнопку


			this->timer1->Start(); //запускаем таймер
			if (endprotect()) {		//проверяем ввод границы
				this->end = Convert::ToDouble(textBox1->Text); //для того что-бы график не рисовался бесконечно пользователь сам устанавливает границу
			}
			else {
				this->end = 15;	//если проверка не пройдена ставим по дефолту
			}
			this->chart1->Series[L"F(x)"]->Points->Clear(); //очищаем область графика при каждом нажатии на кнопку
		}


		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) { //таймер

			this->chart1->Series["F(x)"]->Points->AddXY(count, f(count));//рисуем точки графика

		
			if (countprotect()) {		//проверка скорости счётчика
				this->count += Convert::ToDouble(textBox3->Text); //пользователь сам устанавливает скорость
			}
			else {
				this->count += 0.01;			//если не прошло, то каждый тик таймера будет равен 0.01
			}
			this->textBox1->ReadOnly = true;	//во время рисования графика все поля заблочены
			this->textBox2->ReadOnly = true;
			this->textBox3->ReadOnly = true;

			if (count > end) { 
				this->textBox1->ReadOnly = false;//при достижении границы поля опять становятся рабочими
				this->textBox2->ReadOnly = false;
				this->textBox3->ReadOnly = false;
				this->timer1->Stop(); //при достижении границы таймер прекращает работу и счётчик обнуляется
				this->count = 0;
			}
		}
			   //случайно на лейблы нажал даблкликом, можно стереть, но тогда и в коде выше надо будет копаться, да оно в принципе и не мешает :)
		private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		}
};
		}
