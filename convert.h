/*
 * convert.h
 *
 *  Created on: 2016-8-6
 *      Author: wilson
 */

#ifndef CONVERY_H_
#define CONVERY_H_

typedef unsigned char            u8;
typedef unsigned short           u16;
typedef unsigned int             u32;
typedef unsigned long long int   u64;
typedef char                     s8;
typedef short                    s16;
typedef int                      s32;
typedef long long int            s64;
typedef unsigned char BOOL8;
typedef unsigned int BOOL;

/*������__attribute__*/
#define INLINE__            inline

/*�����С*/
#undef  ARRAY_SIZE
#define ARRAY_SIZE(a)       ((sizeof(a))/(sizeof((a)[0])))

/***********************************************************
 * �������ƣ�gbkk2utf8
 * ������������ gbkתΪ utf8
 * ���������pin_buf ���뻺����
 *       in_len  ���볤��
 * ���������ptr �ɹ������ʼλ��(malloc����),(����ĩβ����'0')
 * �� �� ֵ��  ת����ĳ���, < 0 ʧ��,�����ɹ�
 ***********************************************************/
int gbk2utf8(char **ptr, void *pin_buf, s32 in_len);

/***********************************************************
 * �������ƣ�gbkk2utf8
 * ������������ gbkתΪ utf8
 * ���������pin_buf ���뻺����
 *       in_len  ���볤��
 * ���������ptr �ɹ������ʼλ��(malloc����),(����ĩβ����'0')
 * �� �� ֵ��  ת����ĳ���, < 0 ʧ��,�����ɹ�
 ***********************************************************/
int utf82gbk(char **ptr, void *pin_buf, s32 in_len);

void convet_test(void);

#endif /* TEST_H_ */
