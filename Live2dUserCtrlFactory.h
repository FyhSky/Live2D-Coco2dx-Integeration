#ifndef __LIVE2DUSERCTRLFACTORY_H__
#define __LIVE2DUSERCTRLFACTORY_H__

#include "Live2dUserCtrl.h"
#include "json/document.h"

using rapidjson::Document;
using rapidjson::Value;
/*------------------------------------json file----------------------------------
{
"ע��-modelName": "ģ������",
"modelName": "21.moc3",

"ע��-jsonName": "json�ļ�������",
"jsonName": "Scene1.motion3.json",

"ע��-textureList": "������б�, ����Ϊ��",
"textureList": [
"21.2048/texture_00.png"
],

"ע��-position": "ģ�͵�λ��"
"position":{
"x":100,
"y":100
}

"ע��-scale": "ģ����ʾ�����ű���",
"scale": 1,

"ע��-size": "scaleΪ1ʱ��ģ�ʹ�С",
"size": {
"width": 150,
"height": 325
},

"ע��-times": "������ʱ��ֶΡ��������Ϊ�գ���ô��������Ϊһ�Ρ�[0,3],[3,5]",
"times": [
3, 5
],

"ע��-clickConfig0": "�������Ӧ���á������ڴ������Զ����Ϊ���ĵ����ʽ��",
"ע��-clickConfig1": "bEnableΪ0���ʾ��֧�ֵ��������",
"ע��-clickConfig2": "animationIndex ����ҵ����ʱ�򣬲��ŵ�clickIndex�ζ�����",
"ע��-clickConfig3": "rectxxx �������Ӧ����scaleΪ1ʱ����",
"clickConfig": [{
"bEnable": 1,
"rectOriginX": 0,
"rectOriginY": 0,
"rectWidth": 100,
"rectHeight": 100,
"animationIndex": 1
}],


"ע��-dragConfig0": "��ק����Ӧ���á�",
"ע��-dragConfig1": "bEnableΪ0���ʾ��֧����ק���������ڴ������Զ����Ϊ������ק��ʽ��",
"ע��-dragConfig2": "paramTable�����б�",
"ע��-dragConfig3": "paramName������",
"ע��-dragConfig4": "dragAngle��ק�Ƕȣ���X������Ϊ0��y������Ϊ90",
"ע��-dragConfig5": "dragMaxLength��ק����󳤶ȡ�",
"dragConfig": [{
"bEnable": 1,
"rectOriginX": 0,
"rectOriginY": 0,
"rectWidth": 100,
"rectHeight": 100,
"paramName": "",
"dragAngle": 90,
"dragMaxLength": 100
}]

}
---------------------------------------------------------------------------------*/


class Live2dUserCtrlFactory {
public:
    static Live2dUserCtrl* create (const std::string& configFile);

private:
    static Live2dUserCtrl* createL2dUserCtrl (const std::string& jsonFile, Document& doc);
	static bool initPosition(Live2dUserCtrl* l2dUserCtrl, Document& doc);
    static bool initScale (Live2dUserCtrl* l2dUserCtrl, Document& doc);
    static bool initSize (Live2dUserCtrl* l2dUserCtrl, Document& doc);
    static bool initAnimationTimes (Live2dUserCtrl* l2dUserCtrl, Document& doc);
    static bool initClickConfig (Live2dUserCtrl* l2dUserCtrl, Document& doc);
    static bool initDragConfig (Live2dUserCtrl* l2dUserCtrl, Document& doc);
};

#endif // !__LIVE2DUSERCTRLFACTORY
