#ifndef _PassThroughFileSystem$1$1_h_
#define _PassThroughFileSystem$1$1_h_
//$ class PassThroughFileSystem$1$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

class PassThroughFileSystem$1;

class PassThroughFileSystem$1$1 : public ::java::util::Iterator {
	$class(PassThroughFileSystem$1$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	PassThroughFileSystem$1$1();
	void init$(::PassThroughFileSystem$1* this$1, ::java::util::Iterator* val$itr);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::PassThroughFileSystem$1* this$1 = nullptr;
	::java::util::Iterator* val$itr = nullptr;
};

#endif // _PassThroughFileSystem$1$1_h_