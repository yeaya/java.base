#ifndef _TestProvider$TestPath$1_h_
#define _TestProvider$TestPath$1_h_
//$ class TestProvider$TestPath$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

class TestProvider$TestPath;

class TestProvider$TestPath$1 : public ::java::util::Iterator {
	$class(TestProvider$TestPath$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	TestProvider$TestPath$1();
	void init$(::TestProvider$TestPath* this$0, ::java::util::Iterator* val$itr);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::TestProvider$TestPath* this$0 = nullptr;
	::java::util::Iterator* val$itr = nullptr;
};

#endif // _TestProvider$TestPath$1_h_