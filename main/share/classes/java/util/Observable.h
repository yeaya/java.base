#ifndef _java_util_Observable_h_
#define _java_util_Observable_h_
//$ class java.util.Observable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Observer;
		class Vector;
	}
}

namespace java {
	namespace util {

class $export Observable : public ::java::lang::Object {
	$class(Observable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Observable();
	void init$();
	virtual void addObserver(::java::util::Observer* o);
	virtual void clearChanged();
	virtual int32_t countObservers();
	virtual void deleteObserver(::java::util::Observer* o);
	virtual void deleteObservers();
	virtual bool hasChanged();
	virtual void notifyObservers();
	virtual void notifyObservers(Object$* arg);
	virtual void setChanged();
	bool changed = false;
	::java::util::Vector* obs = nullptr;
};

	} // util
} // java

#endif // _java_util_Observable_h_