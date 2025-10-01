#ifndef _java_lang_invoke_VarHandles_h_
#define _java_lang_invoke_VarHandles_h_
//$ class java.lang.invoke.VarHandles
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ADDRESS_FACTORIES")
#undef ADDRESS_FACTORIES

namespace java {
	namespace lang {
		class ClassValue;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MemberName;
			class MethodHandle;
			class MethodType;
			class VarHandle;
			class VarHandle$AccessMode;
			class VarHandle$AccessType;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}
namespace java {
	namespace nio {
		class ByteOrder;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class VarHandles : public ::java::lang::Object {
	$class(VarHandles, 0, ::java::lang::Object)
public:
	VarHandles();
	void init$();
	static ::java::lang::invoke::VarHandle* byteArrayViewHandle($Class* viewArrayClass, bool be);
	static ::java::lang::invoke::VarHandle* collectCoordinates(::java::lang::invoke::VarHandle* target, int32_t pos, ::java::lang::invoke::MethodHandle* filter);
	static ::java::lang::invoke::VarHandle* dropCoordinates(::java::lang::invoke::VarHandle* target, int32_t pos, $ClassArray* valueTypes);
	static ::java::lang::invoke::VarHandle* filterCoordinates(::java::lang::invoke::VarHandle* target, int32_t pos, $Array<::java::lang::invoke::MethodHandle>* filters);
	static ::java::lang::invoke::VarHandle* filterValue(::java::lang::invoke::VarHandle* target, ::java::lang::invoke::MethodHandle* filterToTarget, ::java::lang::invoke::MethodHandle* filterFromTarget);
	static ::java::lang::reflect::Field* getFieldFromReceiverAndOffset($Class* receiverType, int64_t offset, $Class* fieldType);
	static ::java::lang::reflect::Field* getStaticFieldFromBaseAndOffset(Object$* base, int64_t offset, $Class* fieldType);
	static ::java::lang::invoke::VarHandle* insertCoordinates(::java::lang::invoke::VarHandle* target, int32_t pos, $ObjectArray* values);
	static bool isCheckedException($Class* clazz);
	static ::java::lang::invoke::MethodHandle* joinDuplicateArgs(::java::lang::invoke::MethodHandle* handle, int32_t originalStart, int32_t dropStart, int32_t length);
	static ::java::lang::invoke::MethodHandle* lambda$collectCoordinates$4(int32_t pos, ::java::lang::invoke::MethodHandle* filter, ::java::lang::invoke::VarHandle$AccessMode* mode, ::java::lang::invoke::MethodHandle* modeHandle);
	static ::java::lang::invoke::MethodHandle* lambda$dropCoordinates$5(int32_t pos, $ClassArray* valueTypes, ::java::lang::invoke::VarHandle$AccessMode* mode, ::java::lang::invoke::MethodHandle* modeHandle);
	static ::java::lang::invoke::MethodHandle* lambda$filterCoordinates$1(int32_t pos, $Array<::java::lang::invoke::MethodHandle>* filters, ::java::lang::invoke::VarHandle$AccessMode* mode, ::java::lang::invoke::MethodHandle* modeHandle);
	static ::java::lang::invoke::MethodHandle* lambda$filterValue$0(::java::lang::invoke::MethodHandle* filterFromTarget, ::java::lang::invoke::MethodHandle* filterToTarget, ::java::util::List* additionalCoordinates, ::java::lang::invoke::VarHandle$AccessMode* mode, ::java::lang::invoke::MethodHandle* modeHandle);
	static ::java::lang::invoke::MethodHandle* lambda$insertCoordinates$2(int32_t pos, $ObjectArray* values, ::java::lang::invoke::VarHandle$AccessMode* mode, ::java::lang::invoke::MethodHandle* modeHandle);
	static ::java::lang::invoke::MethodHandle* lambda$permuteCoordinates$3(::java::util::List* targetCoordinates, ::java::util::List* newCoordinates, $ints* reorder, ::java::lang::invoke::VarHandle$AccessMode* mode, ::java::lang::invoke::MethodHandle* modeHandle);
	static ::java::lang::invoke::VarHandle* makeArrayElementHandle($Class* arrayClass);
	static ::java::lang::invoke::VarHandle* makeByteBufferViewHandle($Class* viewArrayClass, bool be);
	static ::java::lang::invoke::VarHandle* makeFieldHandle(::java::lang::invoke::MemberName* f, $Class* refc, $Class* type, bool isWriteAllowedOnFinalFields);
	static ::java::lang::invoke::VarHandle* makeMemoryAddressViewHandle($Class* carrier, bool skipAlignmentMaskCheck, int64_t alignmentMask, ::java::nio::ByteOrder* byteOrder);
	static ::java::lang::invoke::VarHandle* maybeAdapt(::java::lang::invoke::VarHandle* target);
	static ::java::lang::invoke::MethodType* methodTypeFor(::java::lang::invoke::VarHandle$AccessType* at, ::java::lang::invoke::MethodType* oldType, ::java::util::List* oldCoordinates, ::java::util::List* newCoordinates);
	static void noCheckedExceptions(::java::lang::invoke::MethodHandle* handle);
	static int32_t numTrailingArgs(::java::lang::invoke::VarHandle$AccessType* at);
	static ::java::lang::invoke::VarHandle* permuteCoordinates(::java::lang::invoke::VarHandle* target, ::java::util::List* newCoordinates, $ints* reorder);
	static $ints* reorderArrayFor(::java::lang::invoke::VarHandle$AccessType* at, ::java::util::List* newCoordinates, $ints* reorder);
	static bool $assertionsDisabled;
	static ::java::lang::ClassValue* ADDRESS_FACTORIES;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("ADDRESS_FACTORIES")

#endif // _java_lang_invoke_VarHandles_h_