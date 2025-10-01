#ifndef _CheckPermission$Checks_h_
#define _CheckPermission$Checks_h_
//$ class CheckPermission$Checks
//$ extends java.lang.Object

#include <java/lang/Object.h>

class CheckPermission$FileOperation;
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}

class $export CheckPermission$Checks : public ::java::lang::Object {
	$class(CheckPermission$Checks, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CheckPermission$Checks();
	void init$();
	virtual void addFileOperation(::CheckPermission$FileOperation* op, $String* file);
	virtual ::java::util::List* fileOperationChecked(::CheckPermission$FileOperation* op);
	virtual ::java::util::List* permissionsChecked();
	virtual ::java::util::Set* propertiesChecked();
	::java::util::List* permissionsChecked$ = nullptr;
	::java::util::Set* propertiesChecked$ = nullptr;
	::java::util::Map* fileOperationChecked$ = nullptr;
};

#endif // _CheckPermission$Checks_h_