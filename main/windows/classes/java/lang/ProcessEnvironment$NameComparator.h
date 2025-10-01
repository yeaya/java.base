#ifndef _java_lang_ProcessEnvironment$NameComparator_h_
#define _java_lang_ProcessEnvironment$NameComparator_h_
//$ class java.lang.ProcessEnvironment$NameComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace lang {

class ProcessEnvironment$NameComparator : public ::java::util::Comparator {
	$class(ProcessEnvironment$NameComparator, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	ProcessEnvironment$NameComparator();
	void init$();
	int32_t compare($String* s1, $String* s2);
	virtual int32_t compare(Object$* s1, Object$* s2) override;
};

	} // lang
} // java

#endif // _java_lang_ProcessEnvironment$NameComparator_h_