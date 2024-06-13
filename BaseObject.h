#pragma once


class BaseObject
{
public:

	/// <summary>
	/// 状態異常
	/// </summary>
	enum Anomalies
	{
		NONE,		// 通常
		POISON,		// 毒
		PARALYSIS,	// 麻痺
		SLEEP		// 眠り
	};


	/// <summary>
	/// コンストラクタ
	/// </summary>
	BaseObject();

	/// <summary>
	/// コンストラクタ
	/// </summary>
	~BaseObject();

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 更新
	/// </summary>
	void Update();

private:
	// 変数
	// ステータス
	int hitPoint;		// ヒットポイント
	int magicPoint;		// マジックポイント 
	int attack;			// 攻撃力
	int level;			// レベル
	int experience;		// 経験値
	int	anomalies;		// 状態
	int haveMyWeapon;	// 所持している武器

	// バフ
	int effectValue;	// 効果の値
	int buffEffect;		// バフ値
	int debuffEffect;	// デバフ値

};

