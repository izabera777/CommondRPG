#pragma once


class BaseObject
{
public:

	/// <summary>
	/// ��Ԉُ�
	/// </summary>
	enum Anomalies
	{
		NONE,		// �ʏ�
		POISON,		// ��
		PARALYSIS,	// ���
		SLEEP		// ����
	};


	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	BaseObject();

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	~BaseObject();

	/// <summary>
	/// ������
	/// </summary>
	void Initialize();

	/// <summary>
	/// �X�V
	/// </summary>
	void Update();

private:
	// �ϐ�
	// �X�e�[�^�X
	int hitPoint;		// �q�b�g�|�C���g
	int magicPoint;		// �}�W�b�N�|�C���g 
	int attack;			// �U����
	int level;			// ���x��
	int experience;		// �o���l
	int	anomalies;		// ���
	int haveMyWeapon;	// �������Ă��镐��

	// �o�t
	int effectValue;	// ���ʂ̒l
	int buffEffect;		// �o�t�l
	int debuffEffect;	// �f�o�t�l

};

