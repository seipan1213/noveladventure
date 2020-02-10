/*PUBG*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<Windows.h>
#include<time.h>

void player();//主人公作成
void mati();//町を選ぶ
void purogu();//プロローグ
void town();//前半のシナリオ
void town1();//後半のシナリオ1
void town2();//後半のシナリオ2
void town3();//後半のシナリオ3
void town4();//後半のシナリオ4
void boss();//ボス戦のシナリオ
void sento();//戦闘
void gamen();//画面
void gamenue();//画面上
void over();//ゲームオーバー

int	 sel,ch,op,k,f1,i,a,machi,item1,vic,ran1,ran2,boss1,boss2,luck1,luck2,have1,have2,have3,have4,have5;//int型の変数;
char e[14][55]=
{"|――――|　　　　　　　<⌒>　　　　　　　　　　　　皿",
"|三 二 三|　　　　<⌒> 　　　　　　　　<⌒>　　　／⌒|",
"|三 || 三|　<⌒>　　　　　　/ 三三 |　　　　　　皿皿皿",
"|三 二 三|　　　　　　　　 /三三三+|　 △　　　/　　　",
"|三 || 三|　　　　　　　　|￣同￣同|``/皿|　　/△;;｢| ",
"|三 二 三|　　　　/_|ﾛ ﾛ/ ｢~~==~~==|／----＼ / ;;｢| ::",
"|三＿＿三|　　　 /∥|ﾛﾛ/||⌒||⌒| ｢|　田 田 / ｢|::::::",
"|三|::|三|　　　|∥|ﾛﾛ/|.|⌒||⌒| ｢|　田田 | ｢|:::::::",
"|三|\\\\|三|　　 |::､､:::::vy:::::::::::yv::::II::::::::",
"―――――――――――――――――――――――――――",
"　　∠三三三三三ｱ\"／|＝＝　　＝＝　　＝＝＼\"''\";:;;:;",
"　∠三三三三ﾐｱ\" ／|  ＝＝　　＝＝　　＝＝  ＼|ゝ\"):;:;",
"∠三三三三ミｱ ／|  ＝＝　　  ＝＝　  ＝＝    ＼||ゝ;:>",
"ＴＴＴＴＴＴＴＴＴＴＴＴＴＴＴＴＴＴＴＴＴＴＴＴＴＴＴ"};//絵の配列
char s[9][75];//ストーリーの配列
char name[20];//名前の配列
char item2[20]={"ロケラン"};
char item3[20]={"ステルス迷彩"};
char item4[20]={"グレラン"};
char item5[20]={"ルンバ"};//入手アイテムの配列
char buki[4][5]={   {"  HG\0"},
					{" SMG\0"},
					{"  AR\0"},
					{"  SR\0"}  };//武器の二次元配列					  					  
int main(){
	/*スタート画面*/
	printf("　■■■■■■■■　　■■　　　　■■　　■■■■■■　　　　■■■■■■■■\n");
	printf("　■■■■■■■■　　■■　　　　■■　　■■■■■■■　　　■■■■■■■■\n");
	printf("　■■　　　　■■　　■■　　　　■■　　■■　　　■■　　　■■　　　　■■\n");
	printf("　■■　　　　■■　　■■　　　　■■　　■■　　　■■　　　■■　　　　■■\n");
	printf("　■■　　　　■■　　■■　　　　■■　　■■　　　■■　　　■■\n");
	printf("　■■　　　　■■　　■■　　　　■■　　■■　　　■■　　　■■\n");
	printf("　■■　　　　■■　　■■　　　　■■　　■■　　　■■　　　■■\n");
	printf("　■■■■■■■■　　■■　　　　■■　　■■■■■■■　　　■■\n");
	printf("　■■■■■■■■　　■■　　　　■■　　■■■■■■■■　　■■\n");
	printf("　■■　　　　　　　　■■　　　　■■　　■■　　　　■■　　■■\n");
	printf("　■■　　　　　　　　■■　　　　■■　　■■　　　　■■　　■■\n");
	printf("　■■　　　　　　　　■■　　　　■■　　■■　　　　■■　　■■　　■■■■\n");
	printf("　■■　　　　　　　　■■　　　　■■　　■■　　　　■■　　■■　　■■■■\n");
	printf("　■■　　　　　　　　■■　　　　■■　　■■　　　　■■　　■■　　　　■■\n");
	printf("　■■　　　　　　　　■■　　　　■■　　■■　　　　■■　　■■　　　　■■\n");
	printf("　■■　　　　　　　　■■■■■■■■　　■■■■■■■■　　■■■■■■■■\n");
	printf("　■■　　　　　　　　■■■■■■■■　　■■■■■■■■　　■■■■■■■■\n\n\n\n");
	printf("　　　　　　　　　　　　　　　Enterを押してください   　　　　　　　　　　　　\n");
	 while(getchar()!='\n'){}//Enterを押したら進む
	 system("cls");//画面消去
	 
	 
	 //ゲームの遊び方の説明
	 printf("HGはハンドガン\nSMGはサブマシンガン\nARはアサルトライフル\nSRはスナイパーライフル\nロケランはロケットランチャー\nグレランはグレネードランチャー\n\n↑これが拾える武器の名称だよ！！！\n");
	 printf("\n\n　　ゲームのやり方\n\n　　画面を最大化したほうが見やすいよ\n\n\n　　選択方法　　1～4までの半角数字\n\n　　文字を進めるにはEnter\n\n\n　　Enterを押しすぎると選択するときのカーソルが下言ってしまうので注意！！！\n\n\n　　Enterを押したら主人公作成です！！！\n\n");
	 while(getchar()!='\n'){}
	 system("cls");
	 
	 player(); //主人公作成	
   purogu();//プロローグ
	 mati();//町の選択
	 town();//共通の町での話
	 
	 //それぞれの町の話 mati() で選択した値で行き先が変わる
	 switch(machi){
	 	case 1:
			town1();
			break;
		case 2:
			town2();
			break;
		case 3:
			town3();
			break;
		case 4:
			town4();
			break;
	}
	boss();//ボス戦
}
void purogu(void){
	f1=0;//ファイルオープンで使うための変数
	gamen();//画面の出力
}
void mati(void){
	ch=1;//選択するかしないかのフラグ
	sel=4;//選択する際の選択文の数
	f1=9;
	gamen();
	machi=op;//opに選択した値がはいるので変わらないようにmachiにいれる
}
//前半のシナリオ
void town(void){
	ch=1;
	f1=9*2;
	gamen();
	ch=0;
	//選択した値で行き先が変わる
	switch(op){
		case 1:
			f1=9*3;
			gamen();
			item1=0;//それぞれのアイテムを配列の中から出すための値
			break;
		case 2:
			f1=9*4;
			gamen();
			item1=3;
			break;
		case 3:
			f1=9*5;
			gamen();
			item1=2;
			break;
		case 4:
			f1=9*6;
			gamen();
			item1=1;
			break;
	}
	have1=1;//武器1の入手フラグ
	sel=2;
	ch=1;
	f1=9*7;
	gamen();
	ch=0;
	if(op==2){
		f1=9*9;
		gamen();
		f1=9*10;
		sento();//持ってる武器で戦闘したときの勝敗の確率分け
		gamen();
		have2=1;//武器2の入手フラグ
	}
	else{
		f1=9*8;
		gamen();
	}
	srand((unsigned)time(NULL));//乱数を使うための文
	luck1=rand()%2;//乱数を0～1のどちらかで出す
	luck2=rand()%2;
	if(luck1==1){
		f1=9*11;
		gamen();
		if(luck2==1){
			f1=9*12;
			gamen();
			sento();
			f1=9*13;
			gamen();
		}
		f1=9*14;
		gamen();
		have3=1;//武器3の入手フラグ
	}
}
//前半のシナリオ
void town1(void){
	ch=1;
	f1=9*15;
	gamen();
	ch=0;
	if(op==2){
		f1=9*17;
		gamen();
		sento();
		f1=9*18;
		gamen();
		have4=1;//武器4の入手フラグ
	}
	else{
		f1=9*16;
		gamen();
	}
	ch=1;
	f1=9*19;
	gamen();
	ch=0;
	if(op==2){
		f1=9*21;
		gamen();
		sento();
		f1=9*22;
		gamen();
		have5=1;//武器5の入手フラグ
	}
	else{
		f1=9*20;
		gamen();
	}

}
//後半のシナリオ2
void town2(void){
	ch=1;
	f1=9*23;
	gamen();
	ch=0;
	if(op==1){
		f1=9*24;
		gamen();
		sento();
		f1=9*25;
		gamen();
		have4=1;
	}
	else{
		f1=9*26;
		gamen();
	}
	ch=1;
	f1=9*27;
	gamen();
	ch=0;
	if(op==1){
		f1=9*28;
		gamen();
		sento();
		f1=9*29;
		gamen();
		have5=1;
	}
	else{
		f1=9*30;
		gamen();
	}

}
//後半のシナリオ3
void town3(void){
	ch=1;
	f1=9*31;
	gamen();
	ch=0;
	if(op==2){
		f1=9*33;
		gamen();
		sento();
		f1=9*34;
		gamen();
		have4=1;
	}
	else{
		f1=9*32;
		gamen();
	}
	ch=1;
	f1=9*35;
	gamen();
	ch=0;
	if(op==2){
		f1=9*37;
		gamen();
		f1=9*38;
		gamen();
		have5=1;
	}
	else{
		f1=9*36;
		gamen();
	}

}
//後半のシナリオ4
void town4(void){
	ch=1;
	f1=9*39;
	gamen();
	ch=0;
	if(op==2){
		f1=9*41;
		gamen();
		sento();
		f1=9*42;
		gamen();
		have4=1;
	}
	else{
		f1=9*40;
		gamen();
	}
	ch=1;
	f1=9*43;
	gamen();
	ch=0;
	if(op==2){
		f1=9*45;
		gamen();
		f1=9*46;
		gamen();
	}
	else{
		f1=9*44;
		gamen();
		have5=1;
	}

}
//ボス戦のシナリオ
void boss(void){
	ch=1;
	sel=3;
	f1=9*47;
	gamen();
	ch=0;
	switch(op){
		case 1:
			f1=9*48;
			gamen();
			break;
		case 2:
			f1=9*49;
			gamen();
			vic++;//ボスに勝つためのポイントの変動
			break;
		case 3:
			f1=9*50;
			gamen();
			vic--;
			break;
	}
	//入手フラグで判断してシナリオを出す
	if(have2==1){
		f1=9*51;
		gamen();
		vic++;
	}
	if(have3==1){
		f1=9*52;
		gamen();
		vic++;
	}
	if(have4==1){
		f1=9*53;
		gamen();
		vic++;
	}
	if(have5==1){
		f1=9*54;
		gamen();
		vic++;
	}
	ch=1;
	f1=9*55;
	gamen();
	ch=0;
	switch(op){
		case 1:
			f1=9*56;
			gamen();
			vic--;
			break;
		case 2:
			f1=9*57;
			gamen();
			break;
		case 3:
			f1=9*58;
			gamen();
			vic++;
			break;
	}
	//ボス戦に
	if(vic>=3){
		f1=9*59;
		gamen();
	}
	else{
		over();//ゲームオーバー
	}
}

//戦闘の勝敗の確率
void sento(void){
	srand((unsigned)time(NULL));
	ran2=rand()%4;
	switch(item1){
		case 0:
			if(ran2>0){
				over();
			}
			break;
		case 1:
			if(ran2>1){
				over();
			}
			break;
		case 2:
			if(ran2>2){
				over();
			}
			break;
		case 3:
			if(ran2>3){
				over();
			}
			break;
		}
}
//プレイヤーの作成
void player(void){
	printf("名前を入力してね！！！\n\n10文字以内で書いて\n\n");
	scanf("%s",&name);
	printf("ゲームクリアを目指して頑張ってください！！！\n");
	getchar();
	system("cls");
}

//画面の上側の表示
void gamenue(void){	
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");	
	printf("■%54s■ ††アイテム†† ■\n",e[0]);
	if(have1==1){
		printf("■%54s■%18s■\n",e[1],buki[item1]);
	}
	else{
		printf("■%54s■　　　　　　　　　■\n",e[1]);
	}
	if(have2==1){
		printf("■%54s■%18s■\n",e[2],item2);
	}
	else{
		printf("■%54s■　　　　　　　　　■\n",e[2]);
	}
	if(have3==1){
		printf("■%54s■%18s■\n",e[3],item3);
	}
	else{
		printf("■%54s■　　　　　　　　　■\n",e[3]);
	}
	if(have4==1){
		printf("■%54s■%18s■\n",e[4],item4);
	}
	else{
		printf("■%54s■　　　　　　　　　■\n",e[4]);
	}
	if(have5==1){
		printf("■%54s■%18s■\n",e[5],item5);
	}
	else{
		printf("■%54s■　　　　　　　　　■\n",e[5]);
	}
	for(k=5;k<14;k++){
		printf("■%54s■　　　　　　　　　■\n",e[k]);
	}
	
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");	
}


//画面の下側の表示
void gamen(void){

 //ファイルオープンでs配列にテキストファイルのstory1を入れる
	FILE *fp1;//ファイルの変数
	fp1=fopen("story1.txt","r");//fp1にテキストファイルを書き込む
	fseek(fp1,f1*74,SEEK_SET);//テキストファイルの読み込みの位置を変える
	//fp1の中身を37文字ずつs配列の中に入れていく
	for(i=0;i<9;i++){
		fscanf(fp1,"%74s",&s[i]);
	}
	fclose(fp1);//ファイルクローズで閉じておかないとエラーが起こる
	//Enterを押したら1つずつずれていく
	for(a=0;a<9;a++){
			switch(a){
				case 0:
				    gamenue();
					printf("■%20sのストーリー　　　　　　　　　　　　　　　　　　　　　■\n",name);
					printf("■%74s■\n",s[0]);	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");
					printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");	
					while(getchar()!='\n'){}
					system("cls");
					break;
				case 1:
				    gamenue();
					printf("■%20sのストーリー　　　　　　　　　　　　　　　　　　　　　■\n",name);
					printf("■%74s■\n",s[0]);	
					printf("■%74s■\n",s[1]);
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
					while(getchar()!='\n'){}
					system("cls");
					break;
				case 2:
		  		 	gamenue();
					printf("■%20sのストーリー　　　　　　　　　　　　　　　　　　　　　■\n",name);
					printf("■%74s■\n",s[0]);	
					printf("■%74s■\n",s[1]);	
					printf("■%74s■\n",s[2]);
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");			
					while(getchar()!='\n'){}
					system("cls");
					break;
				case 3:
					gamenue();
					printf("■%20sのストーリー　　　　　　　　　　　　　　　　　　　　　■\n",name);
					printf("■%74s■\n",s[0]);	
					printf("■%74s■\n",s[1]);	
					printf("■%74s■\n",s[2]);	
					printf("■%74s■\n",s[3]);	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
					while(getchar()!='\n'){}
					system("cls");
					break;
				case 4:
				    gamenue();
					printf("■%20sのストーリー　　　　　　　　　　　　　　　　　　　　　■\n",name);
					printf("■%74s■\n",s[0]);	
					printf("■%74s■\n",s[1]);	
					printf("■%74s■\n",s[2]);	
					printf("■%74s■\n",s[3]);	
					printf("■%74s■\n",s[4]);	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
					while(getchar()!='\n'){}
					system("cls");
					break;	
				case 5:
					gamenue();
					printf("■%20sのストーリー　　　　　　　　　　　　　　　　　　　　　■\n",name);
					printf("■%74s■\n",s[0]);	
					printf("■%74s■\n",s[1]);	
					printf("■%74s■\n",s[2]);	
					printf("■%74s■\n",s[3]);	
					printf("■%74s■\n",s[4]);	
					printf("■%74s■\n",s[5]);	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");
					printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");	
					while(getchar()!='\n'){}
					system("cls");
					break;
				case 6:
					gamenue();
					printf("■%20sのストーリー　　　　　　　　　　　　　　　　　　　　　■\n",name);
					printf("■%74s■\n",s[0]);	
					printf("■%74s■\n",s[1]);	
					printf("■%74s■\n",s[2]);	
					printf("■%74s■\n",s[3]);	
					printf("■%74s■\n",s[4]);	
					printf("■%74s■\n",s[5]);	
					printf("■%74s■\n",s[6]);	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
					while(getchar()!='\n'){}
					system("cls");
					break;
				case 7:
					gamenue();
					printf("■%20sのストーリー　　　　　　　　　　　　　　　　　　　　　■\n",name);
					printf("■%74s■\n",s[0]);	
					printf("■%74s■\n",s[1]);	
					printf("■%74s■\n",s[2]);	
					printf("■%74s■\n",s[3]);	
					printf("■%74s■\n",s[4]);	
					printf("■%74s■\n",s[5]);	
					printf("■%74s■\n",s[6]);	
					printf("■%74s■\n",s[7]);
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");		
					printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
					printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
					while(getchar()!='\n'){}
					system("cls");
					break;
				case 8:
				  //選択するかの判断
					if(ch==1){
						do{
						gamenue();
						printf("■%20sのストーリー　　　　　　　　　　　　　　　　　　　　　■\n",name);
						printf("■%74s■\n",s[0]);	
						printf("■%74s■\n",s[1]);	
						printf("■%74s■\n",s[2]);	
						printf("■%74s■\n",s[3]);	
						printf("■%74s■\n",s[4]);	
						printf("■%74s■\n",s[5]);	
						printf("■%74s■\n",s[6]);	
						printf("■%74s■\n",s[7]);	
						printf("■%74s■\n",s[8]);
						printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
						printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
							gotoxy(60,27);//カーソルの位置を変える
							scanf("%d",&op);
							system("cls");
						}while(op>sel||op<=0);//入力した値が選択肢以外ならばもう一度
					}
					else{
						gamenue();
						printf("■%20sのストーリー　　　　　　　　　　　　　　　　　　　　　■\n",name);
						printf("■%74s■\n",s[0]);	
						printf("■%74s■\n",s[1]);	
						printf("■%74s■\n",s[2]);	
						printf("■%74s■\n",s[3]);	
						printf("■%74s■\n",s[4]);	
						printf("■%74s■\n",s[5]);	
						printf("■%74s■\n",s[6]);	
						printf("■%74s■\n",s[7]);	
						printf("■%74s■\n",s[8]);
						printf("■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　■\n");	
						printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
						getchar();
					}
					system("cls");
					break;
				}	
		}
}


//ゲームオーバー
void over(){
	f1=9*60;
	gamen();
printf("　■■■■■■■ ■■■■■■■■ ■■                ■■ ■■■■■■■■\n");
printf("　■■■■■■■ ■■■■■■■■ ■■■■        ■■■■ ■■■■■■■■\n");
printf("　■■　　  ■■ ■■        ■■ ■■■■        ■■■■ ■■\n");
printf("　■■　　  ■■ ■■        ■■ ■■ ■■      ■■ ■■ ■■\n");
printf("　■■           ■■        ■■ ■■ ■■      ■■ ■■ ■■\n");
printf("　■■           ■■        ■■ ■■ ■■      ■■ ■■ ■■\n");
printf("　■■           ■■        ■■ ■■ ■■      ■■ ■■ ■■\n");
printf("　■■           ■■        ■■ ■■ ■■      ■■ ■■ ■■\n");
printf("　■■           ■■■■■■■■ ■■ ■■      ■■ ■■ ■■■■■■■■\n");
printf("　■■           ■■■■■■■■ ■■  ■■    ■■  ■■ ■■■■■■■■\n");
printf("　■■           ■■        ■■ ■■  ■■    ■■  ■■ ■■\n");
printf("　■■　■■■■ ■■        ■■ ■■  ■■    ■■  ■■ ■■\n");
printf("　■■　■■■■ ■■        ■■ ■■  ■■    ■■  ■■ ■■\n");
printf("　■■　　  ■■ ■■        ■■ ■■  ■■    ■■  ■■ ■■\n");
printf("　■■　  　■■ ■■        ■■ ■■   ■■  ■■   ■■ ■■\n");
printf("　■■■■■■■ ■■        ■■ ■■    ■■■■    ■■ ■■■■■■■■\n");
printf("　■■■■■■■ ■■        ■■ ■■      ■■      ■■ ■■■■■■■■\n\n");
printf("　■■■■■■■ ■■            ■■ ■■■■■■■■ ■■■■■■■■■■\n");
printf("　■■■■■■■ ■■            ■■ ■■■■■■■■ ■■■■■■■■■■\n");
printf("　■■      ■■ ■■            ■■ ■■             ■■            ■■\n");
printf("　■■      ■■   ■■        ■■   ■■             ■■            ■■\n");
printf("　■■      ■■   ■■        ■■   ■■             ■■            ■■\n");
printf("　■■      ■■   ■■        ■■   ■■             ■■            ■■\n");
printf("　■■      ■■   ■■        ■■   ■■             ■■            ■■\n");
printf("　■■      ■■    ■■      ■■    ■■             ■■■■■■■■■■\n");
printf("　■■      ■■    ■■      ■■    ■■■■■■■■ ■■■■■■■■■■\n");
printf("　■■      ■■    ■■      ■■    ■■■■■■■■ ■■    ■■ \n");
printf("　■■      ■■      ■■  ■■      ■■             ■■     ■■\n");
printf("　■■      ■■      ■■  ■■      ■■             ■■      ■■\n");
printf("　■■      ■■      ■■  ■■      ■■             ■■       ■■\n");
printf("　■■      ■■      ■■  ■■      ■■             ■■        ■■\n");
printf("　■■      ■■        ■■■        ■■             ■■         ■■\n");
printf("　■■■■■■■        ■■■        ■■■■■■■■ ■■          ■■\n");
printf("　■■■■■■■        ■■■        ■■■■■■■■ ■■            ■■\n");
	exit(1);//プログラムの強制終了
}
