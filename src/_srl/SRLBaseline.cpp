#include "SRLBaseline.h"

///////////////////////////////////////////////////////////////
//	Function Name 	: SRLBaseline
//	Belong to Class : SRLBaselin
//	Function  	: 
//	Processing 	: 
//	Remark 		: 
//	Author 		: Frumes
//	Time 		: 2007��1��4��
//	Return Value 	: 
//	Parameter Comment : 
///////////////////////////////////////////////////////////////
SRLBaseline::SRLBaseline(string configXml, string selectFeats)
{
	
}
///////////////////////////////////////////////////////////////
//	�� �� �� : ~SRLBaseline
//	�������� : SRLBaselin
//	�������� : The Class Destructor
//	������� : 
//	��    ע : 
//	��    �� : hjliu
//	ʱ    �� : 2006��6��21��
//	�� �� ֵ : 
//	����˵�� : 
///////////////////////////////////////////////////////////////
SRLBaseline::~SRLBaseline()
{
}

///////////////////////////////////////////////////////////////
//	�� �� �� : IsFilter
//	�������� : SRLBaseline
//	�������� : Check if the node will be filtered: only when the node 
//			   is predicate and punctation
//	������� : 
//	��    ע : 
//	��    �� : hjliu
//	ʱ    �� : 2006��7��14��
//	�� �� ֵ : void
//	����˵�� : const int nodeID
///////////////////////////////////////////////////////////////
inline bool SRLBaseline::IsFilter(int nodeID, 
								  int intCurPd) const
{
	DepNode depNode;
	m_dataPreProc->m_myTree->GetNodeValue(depNode, nodeID);

	//the punctuation nodes, current predicate node
	//changed for PTBtoDep, only filter the current predicate
	if(nodeID == intCurPd)
	{
		return 1;
	}
	else
	{
		return 0;
	}

	//return 0;
}


//for now used
///////////////////////////////////////////////////////////////
//	Function Name 	: setPredicate
//	Belong to Class : SRLBaseline
//	Function  	: 
//	Processing 	: 
//	Remark 		: 
//	Author 		: Frumes
//	Time 		: 2007��1��5��
//	Return Value 	: void
//	Parameter Comment : const vector<int>& vecPred
///////////////////////////////////////////////////////////////
void SRLBaseline::SetPredicate(const vector<int>& vecPred)
{
	m_vecPredicate = vecPred;
}

void SRLBaseline::setDataPreProc(const DataPreProcess* dataPreProc)
{
	m_dataPreProc = dataPreProc;
}