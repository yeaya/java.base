#ifndef _CheckPermission$FileOperation_h_
#define _CheckPermission$FileOperation_h_
//$ class CheckPermission$FileOperation
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("READ")
#undef READ
#pragma push_macro("EXEC")
#undef EXEC
#pragma push_macro("DELETE")
#undef DELETE
#pragma push_macro("WRITE")
#undef WRITE

class $export CheckPermission$FileOperation : public ::java::lang::Enum {
	$class(CheckPermission$FileOperation, 0, ::java::lang::Enum)
public:
	CheckPermission$FileOperation();
	static $Array<CheckPermission$FileOperation>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::CheckPermission$FileOperation* valueOf($String* name);
	static $Array<CheckPermission$FileOperation>* values();
	static ::CheckPermission$FileOperation* READ;
	static ::CheckPermission$FileOperation* WRITE;
	static ::CheckPermission$FileOperation* DELETE;
	static ::CheckPermission$FileOperation* EXEC;
	static $Array<CheckPermission$FileOperation>* $VALUES;
};

#pragma pop_macro("READ")
#pragma pop_macro("EXEC")
#pragma pop_macro("DELETE")
#pragma pop_macro("WRITE")

#endif // _CheckPermission$FileOperation_h_