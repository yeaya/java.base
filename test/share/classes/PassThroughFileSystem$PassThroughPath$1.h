#ifndef _PassThroughFileSystem$PassThroughPath$1_h_
#define _PassThroughFileSystem$PassThroughPath$1_h_
//$ class PassThroughFileSystem$PassThroughPath$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

class PassThroughFileSystem$PassThroughPath;

class PassThroughFileSystem$PassThroughPath$1 : public ::java::util::Iterator {
	$class(PassThroughFileSystem$PassThroughPath$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	PassThroughFileSystem$PassThroughPath$1();
	void init$(::PassThroughFileSystem$PassThroughPath* this$0, ::java::util::Iterator* val$itr);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::PassThroughFileSystem$PassThroughPath* this$0 = nullptr;
	::java::util::Iterator* val$itr = nullptr;
};

#endif // _PassThroughFileSystem$PassThroughPath$1_h_