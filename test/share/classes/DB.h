#ifndef _DB_h_
#define _DB_h_
//$ class DB
//$ extends GrandchildSuperIwithDefault

#include <GrandchildSuperIwithDefault.h>

class DB : public ::GrandchildSuperIwithDefault {
	$class(DB, $NO_CLASS_INIT, ::GrandchildSuperIwithDefault)
public:
	DB();
	void init$();
	virtual void baz() override;
	virtual void foo() override;
	virtual void quux() override;
	virtual void wombat() override;
};

#endif // _DB_h_