//���ڳ���ʶ���豸�İ�������صĲ���

#ifndef _WTYSDK_WHITE_LIST_H_
#define _WTYSDK_WHITE_LIST_H_
#if !defined(WIN32) && !defined(__stdcall)
#define __stdcall
#endif


#ifdef __cplusplus
extern "C" {
#endif





struct PlateInfo_t;
struct plateTraffic_t;


//---һЩ����ֵ������Ϣ����
//typedef enum
//{
//	WTYSDK_WLIST_ERROR_NO_ERROR=0,					//���سɹ�!
//	WTYSDK_WLIST_ERROR_GENERAL=-1,					//���õײ�ӿڿ�ʧ��
//	WTYSDK_WLIST_ERROR_IP_NULL=-2,					//IP��ַΪ��
//	WTYSDK_WLIST_ERROR_SIZEOUTOFRANGE=-3,			//ÿҳ��С����100
//	WTYSDK_WLIST_ERROR_MALLOCFAIL=-4,				//�����ڴ�ʧ��
//	WTYSDK_WLIST_ERROR_IP_ILLEGALITY=-5	,			//IP��ַ�Ƿ�
//	WTYSDK_WLIST_DEVICEALREADYREGISTER=1,			//�豸�Ѿ�ע��ɹ�
//	WTYSDK_WLIST_ERROR_DATA=-11,					//������Ϣ����
//	WTYSDK_WLIST_TIME_OUT=-12,						//select��ʱ
//	WTYSDK_WLIST_SERVER_CLOSED=-13,					//�������˲�����
//	WTYSDK_WLIST_WLISTSOCKET_ERROR=-21,				//�׽��ִ���ʧ��
//	WTYSDK_WLIST_CONNECT_ERROR=-22,					//���ӷ�����ʧ��
//	WTYSDK_WLIST_SELECT_ERROR=-23,					//selectʧ��
//	WTYSDK_WLIST_RECV_ERROR=-24,					//�������ݷ���ʧ��
//	WTYSDK_WLIST_SEND_ERROR=-25,					//��������ʧ��
//	WTYSDK_WLIST_DATABASE_ERROR		=1,				//���ݿ����ʧ��
//	WTYSDK_WLIST_REQ_ERROR			=2,				//�������ʽ����
//	WTYSDK_WLIST_RECIVE_TIMEOUT     =3,			    //���ܰ���ʱ
//	WTYSDK_WLIST_DATA_ERROR			=4,				//���ݴ���
//
//	WTYSDK_WLIST_ERROR_NOREGISTSPACE = -6,  // ��ע��Ԥ���ռ� ���100�� mdf by zhz
//	WTYSDK_WLIST_ERROR_QUERYCONDITION = -7 // ��ѯ��������(�����ѯ�������Ϸ�) mdf by zhz
//}
//CLIENT_LPR_WLIST_ERROR;



/*
*	�������ͺ궨��
*/
#define WTYSDK_PLATETYPE_UNKNOWN        0           ///δ֪����
#define WTYSDK_PLATETYPE_BLUE           1           ///����
#define WTYSDK_PLATETYPE_BLACK          2           ///����
#define WTYSDK_PLATETYPE_SINGLEYELLOW   3           ///�������
#define WTYSDK_PLATETYPE_DOUBLEYELLOW   4           ///˫�����
#define WTYSDK_PLATETYPE_JCPLATE        5			///��������
#define WTYSDK_PLATETYPE_WJPLATE        6			///�侯����
#define WTYSDK_PLATETYPE_INDIVIDUATION  7			///���Ի�����
#define WTYSDK_PLATETYPE_SINGLEARMY		8			///�������
#define WTYSDK_PLATETYPE_DOUBLEARMY     9			///˫�����
#define WTYSDK_PLATETYPE_EMBASSY        10			///ʹ�ݳ���
#define WTYSDK_PLATETYPE_HKOKATE		11			///��۳���
#define WTYSDK_PLATETYPE_TRACTOR        12			///������
#define WTYSDK_PLATETYPE_AOMEN			13 			///������
#define WTYSDK_PLATETYPE_INTERNAL       14			///�ڲ���
#define WTYSDK_PLATETYPE_MHPALTE		15			///�񺽳���
#define WTYSDK_PLATETYPE_CONSULATE      16			///��ݳ���

/*
*	������ɫ�궨��
*/
#define WTYSDK_CARCOLOR_UNKNOWN         0			///δ֪����
#define WTYSDK_CARCOLOR_BLUE			1			///��ɫ
#define WTYSDK_CARCOLOR_YELLOW			2			///��ɫ
#define WTYSDK_CARCOLOR_WHITE			3			///��ɫ
#define WTYSDK_CARCOLOR_BLACK			4			///��ɫ
#define WTYSDK_CARCOLOR_GREEN			5			///��ɫ


/*
*	�����û���������Ϣ�ṹ������������С
*/
#define WTYSDK_WLIST_CUSTOMER_NAME_LEN	20   //�û����ַ�������
#define WTYSDK_WLIST_CUSTOMER_CODELEN	20	 //�û������ַ�������

#define WTYSDK_WLIST_VEHICLE_PLATE_LEN 16	//�����ַ�������
#define WTYSDK_WLIST_VEHICLE_CODE_LEN  20	//���������ַ�������
#define WTYSDK_WLIST_VEHICLE_TIME_LEN  20	//ʱ����Ϣ�ַ�������
#define WTYSDK_WLIST_HTTP_SELECTTRAFFIC_IP_DOMAIN 50    // http ��ѯ ip ��������
#define WTYSDK_WLIST_TIME_SEG_MAX_NUM	8	//ʱ����ַ�������
#define WTYSDK_WLIST_PERPAGE_MAXSIZE    100 //��ѯ���ߵ���ÿҳ���ֵ
#define WTYSDK_WLIST_PIC_SAVEPATH     100	//����ͼƬ·���ַ�������
#define WTYSDK_WLIST_STOREMAXVALUE    30000 //�����������û��ͳ�����Ϣ���ֵ
/*
*	����ͻ���Ϣ���û���Ϣ������ͨ����Ϣ�ṹ��
*/
//�ڰ�������¼�Ŀͻ���Ϣ
typedef struct
{
	unsigned	uCustomerID;			//<�ͻ������ݿ��ID�������޸ġ�ɾ��������������
	char		strName[WTYSDK_WLIST_CUSTOMER_NAME_LEN];	//<�ͻ�����
	char		strCode[WTYSDK_WLIST_CUSTOMER_CODELEN];	//<�ͻ�����,Ψһ����

	char		reserved[256];//����
}
WTYSDK_WLIST_CUSTOMER;

//---����һЩ��api���������Ķ���

// �ڰ������ͻ���Ϣ��ѯ����
typedef struct{
	int 	UserID;											//�ͻ�ID
	char	UserName[WTYSDK_WLIST_CUSTOMER_NAME_LEN];		//�ͻ�����
	char 	UserSerial[WTYSDK_WLIST_CUSTOMER_CODELEN];		//�ͻ����
	int 	page;											//��0��ʼ���һҳ����������
	int 	pageSize;										//ÿҳ��ѯ����Ŀ
	char	reserved[100];
}
WTYSDK_CUSTOMERQUERYCONDITION;


//�ڰ������еĳ�����¼
typedef struct
{
	unsigned	uVehicleID;										//<���������ݿ��ID
	char		strPlateID[WTYSDK_WLIST_VEHICLE_PLATE_LEN];			//<�����ַ���
	unsigned	uCustomerID;									//<�ͻ������ݿ��ID����WTYSDK_WLIST_CUSTOMER::uCustomerID��Ӧ
	unsigned	bEnable;										//<�ü�¼��Ч���
	//unsigned	bEnableTMEnable;								//<�Ƿ�����Чʱ��
	//unsigned	bEnableTMOverdule;								//<�Ƿ�������ʱ��
	char		struTMCreate[WTYSDK_WLIST_VEHICLE_TIME_LEN];									//<�ü�¼����ʱ��
	char		struTMEnable[WTYSDK_WLIST_VEHICLE_TIME_LEN];									//<�ü�¼��Чʱ��
	char		struTMOverdule[WTYSDK_WLIST_VEHICLE_TIME_LEN];									//<�ü�¼����ʱ��
	unsigned	bUsingTimeSeg;									//�Ƿ�ʹ��ʱ���ƥ��0������1
	char        struTimeSeg[256];									//<����ʱ�����Ϣ
	int 		WeekTimeMatch;									//�Ƿ���ʱ�����ʹ������ʱ���ƥ��0������1����
	//int 	TimeMatch;		�Ƿ�ʹ��ʱ���ƥ��0������1
	unsigned	bAlarm;											//<�Ƿ񴥷���������������¼��
	int			iColor;											//<������ɫ
	int			iPlateType;										//<��������
	int         iBlackList;										//�Ƿ������ 0���� 1��
	char		strCode[WTYSDK_WLIST_VEHICLE_CODE_LEN];			//<��������
	char		strRemark[100];									//������ע˵��������Ϊ��
	char		reserved[256];									//����
}
WTYSDK_WLIST_VEHICLE;
//���� ��Ϣ��ѯ����
typedef struct{
	int     PlateinfoID;		//����ID
	int 	UserID;				//�û�ID
	char	UserName[20];		//�ͻ�����
	char 	UserSerial[20];		//�ͻ����
	char 	PlateNumber[16];	//���ƺ�
	char 	CarSerial[20];		//��������
	int 	Blacklist;
	int 	conditionsflag;		//��ѯ��������0 �����û�ID��ѯ 1�����û�����ѯ 2�����û����� 3���ݳ���ID 4���ݳ��ƺ� 5���ݳ�������  6��ѯ����
	int 	page;				//��ѯҳ
	int 	pageSize;			//ÿҳ��С�����ֵ100
	char	reserved[256];
}
WTY_SDK_VEHICLEQUERYRECORD;


//����ͨ����Ϣ
typedef struct
{
	int iTrafficId;												//����ͨ��ID������
	int iVehicleID;												//����ID
	int iCustomerID;											//�û�ID
	char strPlateNumber[WTYSDK_WLIST_VEHICLE_PLATE_LEN];		//�����ַ���
	char strPassTime[WTYSDK_WLIST_VEHICLE_TIME_LEN];			//����ͨ��ʱ��
	int  iCarSigned;											//������ʾ��0��������1�ڲ���
	int iIsOpenSigno;											//�Ƿ�����բ�� 0δ̧�ˣ�1��̧��
	char strPicSavePath[WTYSDK_WLIST_PIC_SAVEPATH];				//ͼƬ����·��
	char		reserved[256];									//����
}
WTYSDK_WLIST_TRAFFIC_INFO;
//Http��¼��Ϣ
typedef struct
{
	int		TrafficID;				///*ID�ţ�����Լ����ɣ�����ͻ�ָ�� */
	char  	PlateNumber[16];		///*���ƺ���*/
	char	RecDateTime[20];		///*ʶ��ʱ��*/
	char	TransDateTime[20];		///*����ʱ��*/
	int 	FullImageSize;			///*��ͼ��С*/
	int 	PlateImageSize;			///*Сͼ��С*/
	int 	IPtype;					///*ʹ��IP��������0 IP */
	char 	IP_Domain[50];			///*IP �� ����*/
	int		Port;					///*�˿�*/
	char 	Path[200];				///*·��*/
	int 	TransType;				///*���ͷ�ʽ  0 ��ʱ�������� 1 �쳣�����ش�*/
	int 	state;					///*���ͽ��*/
	int 	ReciveState;				///*������״̬*/
	int		DoorOpen;				///*�Ƿ�բ 0 ���� 1 ��*/
	int		AbnormalID;				///*����ID*/
	char		reserved[256];									//����
}
WTYSDK_WLIST_HTTP_INFO;

//����ͨ����Ϣ��ѯ����
typedef struct
{
	char	StartTime[WTYSDK_WLIST_VEHICLE_TIME_LEN];		//*��ʼʱ��
	char 	EndTime[WTYSDK_WLIST_VEHICLE_TIME_LEN];		//*����ʱ��
	char 	chPlateNumber[WTYSDK_WLIST_VEHICLE_PLATE_LEN];	//*���ƺ�
	int 	page;											//*��ǰҳ��
	int 	pageSize;										//*ÿҳ����ѯ�Ĵ�С��100������100����-1
	int     queryFlag;										//*0 ʱ��β�ѯ  1 ���Ʋ�ѯ 2 ��ҳ��ѯ
	char	reserved[256];
}
WTY_SDK_TRAFFIC_QUERYCONDITION;
//Http��¼��ѯ����
typedef struct
{
	char	StartTime[WTYSDK_WLIST_VEHICLE_TIME_LEN];		//*��ʼʱ��
	char 	EndTime[WTYSDK_WLIST_VEHICLE_TIME_LEN];		//*����ʱ��
	char 	chPlateNumber[WTYSDK_WLIST_VEHICLE_PLATE_LEN];	//*���ƺ�
	char 	IP[16];		/*IP��������*/
	char	Domain[50];//����
	int     ipOrDomain;//1 ip 2 ����
	int 	state;				/*���ͽ��*/
	//int     http_select_type;/*��ѯ��ʽ��1������ip����������ѯ ��ѡʱ���:2�����ͽ����ѯ ��ѡʱ��� 3:����ʧ�������ϴ� ��ѡʱ��� 4:ǰһ��û���ϴ��ɹ�����һ��ɹ���*/
	int 	page;											//*��ǰҳ��
	int 	pageSize;										//*ÿҳ����ѯ�Ĵ�С��100������100����-1
	int     queryFlag;										//*0 ʱ��β�ѯ  1 ���Ʋ�ѯ 2 ��ҳ��ѯ  3��������IP��ѯ 4���ͽ����ѯ 5����ʧ�ܴ����ϴ�  6ǰһ��û�гɹ�����һ��ɹ�
	int     timeIsEnabled;///ʹ���Ƿ�����ʱ���ƥ��
	char	reserved[256];
}
WTY_SDK_HTTP_QUERYCONDITION;

//���ص���Ϣ����
typedef enum{
	WTYSDK_WLIST_CB_TYPE_NO = 0,								//��Ч��Ϣ
	WTYSDK_WLIST_CB_TYPE_CUSTOMER,								//�ͻ���Ϣ
	WTYSDK_WLIST_CB_TYPE_VEHICLE,								//������Ϣ
	WTYSDK_WLIST_CB_TYPE_TRAFFIC,								//����ͨ����Ϣ
	WTYSDK_WLIST_CB_TYPE_ROWS									//�������û��ۺ���Ϣ
}
WTYSDK_WLIST_CB_TYPE;
//�������û���Ϣ
typedef struct
{
	//int nSize;													//*�������복�ƺ��û�����������ÿ�����100��
	WTYSDK_WLIST_VEHICLE nCarInfo;								//*�������복����Ϣ�ṹ������ָ��
	WTYSDK_WLIST_CUSTOMER nUserInfo;							//*���������û���Ϣ�ṹ������ָ��
}
WTYSDK_IMPORTROWS;
//��������������ʧ�ܱ�־
typedef struct
{
	int		nRow;//����ʧ�ܵ�����
	char 		Result[WTYSDK_WLIST_STOREMAXVALUE];//0 ���ݿ�洢��������10000����-1 �û����Ĵ���-2 ������Ϣ����  -3�ظ�����
}
WTYSDK_IMPORT_FAILDREASON;
/*
*  @brief ���������ͻ���Ϣ������ͨ����Ϣ�Ĳ�ѯ�����������
*  @param  [IN] type �ص��������ص���Ϣ����
*  @param  [IN] pLP ��ѯ�ĳ�����Ϣ��¼
*  @param  [IN] pCustomer ��ѯ�Ŀͻ���Ϣ��¼
*  @param  [IN] nTotal ���β�ѯ���ص�����
*  @param  [IN] pUserData �ص������е�������
*  @ingroup group_callback
*/
typedef void (*WTYSDK_WLIST_QUERY_CALLBACK)(WTYSDK_WLIST_CB_TYPE type, WTYSDK_WLIST_VEHICLE *pLP,
														   WTYSDK_WLIST_CUSTOMER *pCustomer,
														   WTYSDK_WLIST_TRAFFIC_INFO *pTrafficInfo,
														  int nTotal,
														  void *pUserData);

/*
*  @brief  HTTP�Ĳ�ѯ�����������
*  @param  [IN] pTrafficInfo ��ѯ��HTTP��Ϣ��¼
*  @param  [IN] nTotal ���β�ѯ���ص�����
*  @param  [IN] pUserData �ص������е�������
*  @ingroup group_callback
*/
typedef void (*WTYSDK_WLIST_QUERY_HTTP_CALLBACK)(WTYSDK_WLIST_HTTP_INFO *pTrafficInfo,int nTotal,void *pUserData);



/*
*  @brief ���ð�������Ϳͻ���Ϣ��Ĳ�ѯ����ص�
*  @param  [IN] func ��ѯ����ص�����
*  @param  [IN] pUserData �ص������е�������  (�û�����ָ��)
*  @param  [IN] pServerIp ������IP
*  @return 0��ʾ�ɹ���������ʾʧ��
*  @ingroup group_database
*/
int  __stdcall WTYSDK_WhiteListSetQueryCallBack(WTYSDK_WLIST_QUERY_CALLBACK func, void *pUserData,char *pServerIp);

/*
*  @brief ����HTTP��ѯ����ص�
*  @param  [IN] func ��ѯ����ص�����
*  @param  [IN] pUserData �ص������е�������
*  @param  [IN] pServerIp ������IP
*  @return 0��ʾ�ɹ���������ʾʧ��
*  @ingroup group_database
*/
int  __stdcall WTYSDK_WhiteListSetQueryHttpCallBack(WTYSDK_WLIST_QUERY_HTTP_CALLBACK func, void *pUserData,char *pServerIp);


/*
*  @brief  ��ȡ���пͻ���Ϣ��¼������
*  @param  [IN] pServerIp ������IP
*  @return >=0��ʾ�ɹ���<0��ʾʧ��
*/
int  __stdcall WTY_WhiteListGetCustomerCount(char *pServerIp);

/*
*  @brief  ��ѯ��������ͻ���Ϣ����,�ͻ���Ϣͨ���ص���������
*  @param  [IN] pServerIp ������IP
*  @param  [IN] numbers ����ÿҳ��ѯ���ֵ100(1-100)�����ݶ�Ļ����Է�ҳ��ѯ����ʾ
*  @param  [IN] nPage   ��ѯҳ��,��ǰҳ����0��ʼ�����һҳ
*  @return >=0��ʾ��ѯ����������<0��ʾʧ��
*/
int __stdcall WTY_WhiteListLoadCustomer(char *pServerIp,int numbers,int nPage);

/*
*  @brief ��ȡ�������ͻ���Ϣ��ͨ��ID
*  @param  [IN] pServerIp ������IP
*  @param  [IN] iCustomerId �ͻ���Ϣ��ID
*  @return >=0��ʾ��ѯ����������<0��ʾʧ��
*/
int __stdcall WTY_WhiteListLoadCustomerById(char *pServerIp,int iCustomerId); // idΨһ

/*
*  @brief ��ȡ�������ͻ���Ϣ��ͨ���ͻ�����
*  @param  [IN] pServerIp ������IP
*  @param  [IN] strCode �ͻ���Ϣ��Ψһ����
*  @param  [IN] numbers ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @param  [IN] nPage   ��ѯҳ��,��ǰҳ����0��ʼ�����һҳ
*  @return >=0��ʾ��ѯ����������<0��ʾʧ��
*/
int __stdcall WTY_WhiteListLoadCustomerByCode(char *pServerIp,char* strCode,int numbers,int nPage);
/*
*  @brief ��ȡ�������ͻ���Ϣ��ͨ���ͻ�����
*  @param  [IN] strName �ͻ���Ϣ������
*  @param  [IN] pServerIp ������IP
*  @param  [IN] numbers ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @param  [IN] nPage   ��ѯҳ��,��ǰҳ����0��ʼ�����һҳ
*  @return >=0��ʾ��ѯ����������<0��ʾʧ��
*/
int __stdcall WTY_WhiteListLoadCustomerByName(char *pServerIp,char* strName,int numbers,int nPage);
/*
*  @brief �����û���Ϣ��¼
*  @param  [IN] pServerIp ������IP
*  @param  [IN] pNewCustomer ���ӵ��û���Ϣ�Ľṹ��  ���� uCustomerID Ϊ�Զ����� ��д����
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListInsertCustomer(char *pServerIp,WTYSDK_WLIST_CUSTOMER  pNewCustomer);
/*
*  @brief ɾ���������ͻ���Ϣ��ͨ��ID
*  @param  [IN] pServerIp ������IP
*  @param  [IN] iCustomerId �ͻ���Ϣ��ID
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/

int __stdcall WTY_WhiteListDeleteCustomerById(char *pServerIp,int iCustomerId);
/*
*  @brief ɾ���������ͻ���Ϣ��ͨ���û���
*  @param  [IN] pServerIp ������IP
*  @param  [IN] strName �ͻ���
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListDeleteCustomerByName(char *pServerIp,char* strName);
/*
*  @brief ɾ���������ͻ���Ϣ��ͨ���ͻ�����
*  @param  [IN] pServerIp ������IP
*  @param  [IN] strCode �ͻ���Ϣ��Ψһ����
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListDeleteCustomerByCode(char *pServerIp,char* strCode);


/*
*  @brief ���°������ͻ���Ϣ��ͨ��ID   ע��idϵͳ���ɣ�����ʱ��id�����Ӧ������������
*  @param  [IN] pServerIp ������IP
*  @param  [IN] pNewCustomer �ͻ���Ϣ
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListUpdateCustomerById(char *pServerIp,WTYSDK_WLIST_CUSTOMER  pNewCustomer);

/*
*  @brief ���°������ͻ���Ϣ��ͨ���û���  ע��idϵͳ���ɣ�����ʱ��id�����Ӧ������������
*  @param  [IN] pServerIp ������IP
*  @param  [IN] pNewCustomer �ͻ���Ϣ
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListUpdateCustomerByName(char *pServerIp,WTYSDK_WLIST_CUSTOMER pNewCustomer);

/*
*  @brief ���°������ͻ���Ϣ��ͨ���ͻ�����  idϵͳ���ɣ�����ʱ��id�����Ӧ������������  �˺��������id���������û������ͬ�Ķ���
*  @param  [IN] pServerIp ������IP
*  @param  [IN] pNewCustomer �ͻ���Ϣ
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListUpdateCustomerByCode(char *pServerIp,WTYSDK_WLIST_CUSTOMER pNewCustomer);
/*
*  @brief  ��ȡ���г���ͨ�м�¼������
*  @param  [IN] pServerIp ������IP
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int  __stdcall WTY_WhiteListGetTrafficCount(char *pServerIp);
/*
*  @brief  ��ѯ���г���ͨ�м�¼
*  @param  [IN] pServerIp ������IP
*  @param  [IN] queryConditions ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @return >=0��ʾ��ѯ����������<0��ʾʧ��
*/
int __stdcall WTY_WhiteListTrafficLoad(char *pServerIp,WTY_SDK_TRAFFIC_QUERYCONDITION queryConditions);

/*
*  @brief  ͨ������ͨ��IDɾ������ͨ����Ϣ
*  @param  [IN] pServerIp ������IP
*  @param  [IN] tracfficId ����ͨ�м�¼��ID
*  @return 0��ʾ�ɹ���-1��ʾʧ��
*/
int __stdcall WTY_WhiteListTraffiDelete(char *pServerIp,int tracfficId);

/*
*  @brief  ��ճ���ͨ����Ϣ
*  @param  [IN] pServerIp ������IP
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListTraffiDeleteAll(char *pServerIp);

/*
*  @brief  ������������ͨ����Ϣ
*  @param  [IN] pServerIp ������IP
*  @param  [OUT] pExportBuf �洢��ѯ���ļ�¼������
*  @param  [OUT] nSucceedCount �洢��ѯ�ɹ��ļ�¼������
*  @param  [IN] nIndexTotal  ��Ҫ��ȡ���ļ�¼����
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListTraffiExportAll(char *pServerIp,WTYSDK_WLIST_TRAFFIC_INFO *pExportBuf,int *nSucceedCount,int nIndexTotal);

/*
*  @brief  ��ȡ���г�����Ϣ��¼������
*  @param  [IN] pServerIp ������IP
*  @return >=0��ʾ�ɹ���ȡ������Ŀ��<0��ʾʧ��
*/
int  __stdcall WTY_WhiteListGetVehicleCount(char *pServerIp);

/*
*  @brief  ��ѯ������������Ϣ����,�ͻ���Ϣͨ���ص���������   ע���˺���Ϊͳ�� ֻ��עWTY_SDK_VEHICLEQUERYRECORD ��page ��pagesize
*  @param  [IN] pServerIp ������IP
*  @param  [IN] queryConditions ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @return >=0��ʾ��ѯ����������<0��ʾʧ��
*/
int __stdcall WTY_WhiteListLoadVehicle(char *pServerIp,WTY_SDK_VEHICLEQUERYRECORD queryConditions);
/*
*  @brief ��ȡ������������Ϣ��ͨ�����ƺ���  ע�� ֻ��עWTY_SDK_VEHICLEQUERYRECORD ��page ��pagesize ���ƺ���   ���ҳ��ƺŹؼ���
*  @param  [IN] pServerIp ������IP
*  @param  [IN] queryConditions ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @return >=0��ʾ�ɹ���ȡ����������<0��ʾʧ��
*/
int __stdcall WTY_WhiteListLoadVehicleByPlateId(char *pServerIp,WTY_SDK_VEHICLEQUERYRECORD queryConditions);
/*
*  @brief ��ȡ������������Ϣ��ͨ����������ID
*  @param  [IN] pServerIp ������IP
*  @param  [IN] queryConditions ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @return >=0��ʾ�ɹ���ȡ����������<0��ʾʧ��
*/
int __stdcall WTY_WhiteListLoadVehicleById(char *pServerIp,WTY_SDK_VEHICLEQUERYRECORD queryConditions);

/*
*  @brief ��ȡ������������Ϣ��ͨ����������
*  @param  [IN] pServerIp ������IP
*  @param  [IN] strCode ������Ϣ�ı���
*  @param  [IN] queryConditions ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @return >=0��ʾ�ɹ���ȡ����������<0��ʾʧ��
*/
int __stdcall WTY_WhiteListLoadVehicleByCode(char *pServerIp,WTY_SDK_VEHICLEQUERYRECORD queryConditions);
/*
*  @brief ��ȡ������������Ϣ��ͨ���û�ID
*  @param  [IN] pServerIp ������IP
*  @param  [IN] queryConditions ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @return >=0��ʾ�ɹ���ȡ����������<0��ʾʧ��
*/
int __stdcall WTY_WhiteListLoadVehicleByUserId(char *pServerIp,WTY_SDK_VEHICLEQUERYRECORD queryConditions);

/*
*  @brief ��ȡ������������Ϣ��ͨ�������û�����
*  @param  [IN] pServerIp ������IP
*  @param  [IN] queryConditions ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @return >=0��ʾ��ȡ���ĳ���������<0��ʾʧ��
*/
int __stdcall WTY_WhiteListLoadVehicleByUserName(char *pServerIp,WTY_SDK_VEHICLEQUERYRECORD queryConditions);

/*
*  @brief ��ȡ������������Ϣ��ͨ���û�����
*  @param  [IN] pServerIp ������IP
*  @param  [IN] strCode ������Ϣ�ı���
*  @param  [IN] queryConditions ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @return >=0��ʾ��ȡ����������<0��ʾʧ��
*/
int __stdcall WTY_WhiteListLoadVehicleByUserCode(char *pServerIp,WTY_SDK_VEHICLEQUERYRECORD queryConditions);
/*
*  @brief ���°�����������Ϣ��ͨ�����ƺ���
*  @param  [IN] pServerIp ������IP
*  @param  [IN] strVehicleInfo ������Ϣ
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListUpdateVehicleByPlateId(char *pServerIp,WTYSDK_WLIST_VEHICLE strVehicleInfo);
/*
*  @brief ���°�����������Ϣ��ͨ����������ID
*  @param  [IN] pServerIp ������IP
*  @param  [IN] strVehicleInfo ������Ϣ
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListUpdateVehicleById(char *pServerIp,WTYSDK_WLIST_VEHICLE  strVehicleInfo);
/*
*  @brief ���°�����������Ϣ��ͨ����������
*  @param  [IN] pServerIp ������IP
*  @param  [IN] strVehicleInfo ������Ϣ
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListUpdateVehicleByCode(char *pServerIp,WTYSDK_WLIST_VEHICLE strVehicleInfo);
/*
*  @brief ���Ӱ�����������Ϣ
*  @param  [IN] pServerIp ������IP
*  @param  [IN] strVehicleInfo ������Ϣ
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListInsertVehicle(char *pServerIp,WTYSDK_WLIST_VEHICLE strVehicleInfo);

/*
*  @brief ɾ��������������Ϣ��ͨ�����ƺ���
*  @param  [IN] pServerIp ������IP
*  @param  [IN] strPlateNumber ���ƺ���
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListDeleteVehicleByPlateId(char *pServerIp,char* strPlateNumber);

/*
*  @brief ɾ��������������Ϣ��ͨ����������ID
*  @param  [IN] pServerIp ������IP
*  @param  [IN] iVehicleId ������Ϣ����ID
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListDeleteVehicleById(char *pServerIp,int iVehicleId);

/*
*  @brief ɾ��������������Ϣ��ͨ����������
*  @param  [IN] pServerIp ������IP
*  @param  [IN] strVehicleCode ������Ϣ����
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListDeleteVehicleByCode(char *pServerIp,char* strVehicleCode);

/*
*  @brief 	��հ�����������Ϣ
*  @param  [IN] pServerIp ������IP
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListEmptyVehicle(char *pServerIp);

/*
*  @brief  ������г������û���Ϣ
*  @param  [IN] pServerIp ������IP
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListClearCustomerAndVehicles(char *pServerIp);

/*
*  @brief  �����ݿ�ɾ���ͻ��ĳ�����Ϣ,ͨ���û�ID
*  @param  [IN] pServerIp ������IP
*  @param  [IN] pServerIp ������IP
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListDeleteVehicleByCustomerId(char *pServerIp ,int userId);

/*
*  @brief  �����ݿ�ɾ���ͻ��Լ��ͻ��ĳ�����Ϣ,ͨ���û�ID
*  @param  [IN] pServerIp ������IP
*  @param  [IN] pServerIp ������IP
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListDeleteVehicleAndUserByCustomerId(char *pServerIp ,int userId);

/*
*  @brief  ��ȡ�������ͻ���ͻ��ͳ�����¼������
*  @param  [IN] pServerIp ������IP
*  @return >=0��ʾ�ɹ���<0��ʾʧ��
*/
int  __stdcall WTY_WhiteListGetRowCount(char *pServerIp);
/*
*  @brief  ��ѯ������������Ϣ����,�ͻ���Ϣͨ���ص���������
*  @param  [IN] pServerIp ������IP
*  @param  [IN] nQueryConditions ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @return >=0��ʾ��ѯ����������<0��ʾʧ��
*/
int  __stdcall WTY_WhiteListLoadRows(char *pServerIp,WTY_SDK_VEHICLEQUERYRECORD nQueryConditions);

/*
*  @brief  ��ѯ������������Ϣ����,ͨ���ص���������
*  @param  [IN] pServerIp ������IP
*  @param  [IN] nQueryConditions ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @return >=0��ʾ��ѯ����������<0��ʾʧ��
*/
int  __stdcall WTY_WhiteListLoadRowsCustomerByUserId(char *pServerIp,WTY_SDK_VEHICLEQUERYRECORD nQueryConditions);

/*
*  @brief  ��ѯ������������Ϣ����,ͨ���ص���������
*  @param  [IN] pServerIp ������IP
*  @param  [IN] nQueryConditions ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @return >=0��ʾ��ѯ����������<0��ʾʧ��
*/
int  __stdcall WTY_WhiteListLoadRowsCustomerByUserCode(char *pServerIp,WTY_SDK_VEHICLEQUERYRECORD nQueryConditions);

/*
*  @brief  ��ѯ������������Ϣ����,ͨ���ص���������
*  @param  [IN] pServerIp ������IP
*  @param  [IN] nQueryConditions ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @return >=0��ʾ��ѯ����������<0��ʾʧ��
*/
int  __stdcall WTY_WhiteListLoadRowsCustomerByUserName(char *pServerIp,WTY_SDK_VEHICLEQUERYRECORD nQueryConditions);

/*
*  @brief  ͨ�����Ʋ�ѯ�������û���Ϣ�ͳ�����Ϣ,ͨ���ص���������
*  @param  [IN] pServerIp ������IP
*  @param  [IN] pCarPlate ��ѯ�ĳ��ƺ�
*  @return >=0��ʾ��ѯ����������<0��ʾʧ��
*/
int  __stdcall WTY_WhiteListLoadRowsCustomerAndCarByPlate(char *pServerIp,WTY_SDK_VEHICLEQUERYRECORD nQueryConditions);

/*
*  @brief  �������������������Ϣ�Ϳͻ���Ϣ
*  @param  [IN] pServerIp ������IP
*  @param  [IN] nImportRows ���ε������ֵ100�����ݶ�Ļ����Էִε���,����100����-1
*  @param  [IN] MyBatchResult ����������ʧ�ܼ�¼��λ��,��Ӧλ�õ�Resultֵ����1Ϊʧ��
*  @param  [IN] importMaxValue ���ε������100��
*  @return >=0��ʾ�ɹ���������<0��ʾʧ��
*/
// pImportRows �����û��ͳ�ƥ����Ϣ���������100��
// faildReason [out]������(WTYSDK_IMPORT_FAILDREASON����nRow��ʾ��������������Result�����ʾÿһ����ִ�����)
// importMaxValue [int] ��ʾpImportRows�е��ε��������(���絼��10�������������10)--���100
int  __stdcall WTY_WhiteListImportRows(char *pServerIp,WTYSDK_IMPORTROWS *pImportRows,WTYSDK_IMPORT_FAILDREASON *faildReason,int importMaxValue);
/*
*  @brief  ���������������ͻ��ͳ�����Ϣ
*  @param  [IN] pServerIp ������IP
*  @param  [OUT] nImportRows ���������ݼ�¼��Ϣ�ṹ��ָ�룬��С�ǽṹ���С*nTotal
*  @param  [OUT] pExportSucceed �����ɹ�����Ŀ
*  @param  [IN] WTY_WhiteListGetRowCount ��ȡ���ļ�¼��������
*  @return >=0��ʾ�ɹ���������<0��ʾʧ��
*/
// pExportRows[out]  ��������
// pExportSucceed [out] ʵ�ʳɹ��������ٸ�
// nTotal [in] ��Ҫ����������(ϣ������500��������500��)  �Դ�����ҳ������ÿҳ���100
int  __stdcall WTY_WhiteListExportsRows(char *pServerIp,WTYSDK_IMPORTROWS *pExportRows,int *pExportSucceed,int nTotal);


/*
*  @brief  ��ȡ����Http���ݿ��¼������
*  @param  [IN] pServerIp ������IP
*  @return >=0��ʾ��ȡ������<0��ʾʧ��
*/
int  __stdcall WTY_WhiteListGetHttpCount(char *pServerIp);
/*
*  @brief  ��ѯHttp���ݼ�¼
*  @param  [IN] pServerIp ������IP
*  @param  [IN] queryConditions ����ÿҳ��ѯ���ֵ100�����ݶ�Ļ����Է�ҳ��ѯ����ʾ,����100����-1
*  @return >=0��ʾ��ѯ����������<0��ʾʧ��
*/
int __stdcall WTY_WhiteListHttpLoad(char *pServerIp,WTY_SDK_HTTP_QUERYCONDITION queryConditions,int *nTotal);

/*
*  @brief  ͨ��Http��¼IDɾ��Http��¼
*  @param  [IN] pServerIp ������IP
*  @param  [IN] tracfficId ����ͨ�м�¼��ID
*  @return 0��ʾ�ɹ���-1��ʾʧ��
*/
int __stdcall WTY_WhiteListHttpDelete(char *pServerIp,int tracfficId);

/*
*  @brief  ���Http��¼
*  @param  [IN] pServerIp ������IP
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListHttpDeleteAll(char *pServerIp);

/*
*  @brief  ��������Http��¼
*  @param  [IN] pServerIp ������IP
*  @param  [OUT] pExportBuf �洢��ѯ���ļ�¼������
*  @param  [OUT] nSucceedCount �洢��ѯ�ɹ��ļ�¼������
*  @param  [IN] nIndexTotal ϣ�������ĸ���
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListHttpExportAll(char *pServerIp,WTYSDK_WLIST_HTTP_INFO *pExportBuf,int *nSucceedCount,int nIndexTotal);

/*
*  @brief  ���ݳ��Ʋ�ѯ������Ϣ(�������traffic)
*  @param  [IN] pServerIp ������IP
*  @param  [IN] pPlate ���ƺ�
*  @param  [OUT] pVehicleInfo ������Ϣ
*  @return 0��ʾ�ɹ���δ�ҵ���1��ʾ�����ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListTrafficRequestByPlate(char *pServerIp, char *pPlate, PlateInfo_t* pVehicleInfo);

/*
*  @brief  д��ͨ����(�������traffic)
*  @param  [IN] pServerIp ������IP
*  @param  [IN] pTrafficInfo Ҫ�����ͨ����Ϣ
*  @return 0��ʾ�ɹ���<0��ʾʧ��
*/
int __stdcall WTY_WhiteListTrafficInsertTrafficInfo(char* pServerIp, plateTraffic_t* pTrafficInfo);

#ifdef __cplusplus
}
#endif

#endif
