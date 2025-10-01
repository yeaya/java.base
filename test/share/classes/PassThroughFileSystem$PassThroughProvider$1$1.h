#ifndef _PassThroughFileSystem$PassThroughProvider$1$1_h_
#define _PassThroughFileSystem$PassThroughProvider$1$1_h_
//$ class PassThroughFileSystem$PassThroughProvider$1$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

class PassThroughFileSystem$PassThroughProvider$1;

class PassThroughFileSystem$PassThroughProvider$1$1 : public ::java::util::Iterator {
	$class(PassThroughFileSystem$PassThroughProvider$1$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	PassThroughFileSystem$PassThroughProvider$1$1();
	void init$(::PassThroughFileSystem$PassThroughProvider$1* this$1, ::java::util::Iterator* val$itr);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::PassThroughFileSystem$PassThroughProvider$1* this$1 = nullptr;
	::java::util::Iterator* val$itr = nullptr;
};

#endif // _PassThroughFileSystem$PassThroughProvider$1$1_h_