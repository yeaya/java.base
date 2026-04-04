#include <java/lang/invoke/VarHandleGuards.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessDescriptor.h>
#include <java/lang/invoke/VarHandle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessDescriptor = ::java::lang::invoke::VarHandle$AccessDescriptor;

namespace java {
	namespace lang {
		namespace invoke {

void VarHandleGuards::init$() {
}

$Object* VarHandleGuards::guard_L_L($VarHandle* handle, Object$* arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $(handle->vform->getMemberName(ad->mode))})));
		return $nc(ad->returnType)->cast(r);
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0}));
	}
}

void VarHandleGuards::guard_LL_V($VarHandle* handle, Object$* arg0, Object$* arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, arg1, $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, arg1, $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, arg1}));
		}
	}
}

bool VarHandleGuards::guard_LLL_Z($VarHandle* handle, Object$* arg0, Object$* arg1, Object$* arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, arg1, arg2, $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, arg1, arg2})));
	}
}

$Object* VarHandleGuards::guard_LLL_L($VarHandle* handle, Object$* arg0, Object$* arg1, Object$* arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, arg1, arg2, $(handle->vform->getMemberName(ad->mode))})));
		return $nc(ad->returnType)->cast(r);
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, arg1, arg2}));
	}
}

$Object* VarHandleGuards::guard_LL_L($VarHandle* handle, Object$* arg0, Object$* arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, arg1, $(handle->vform->getMemberName(ad->mode))})));
		return $nc(ad->returnType)->cast(r);
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, arg1}));
	}
}

int32_t VarHandleGuards::guard_L_I($VarHandle* handle, Object$* arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $intValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0})));
	}
}

void VarHandleGuards::guard_LI_V($VarHandle* handle, Object$* arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1)}));
		}
	}
}

bool VarHandleGuards::guard_LII_Z($VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)})));
	}
}

int32_t VarHandleGuards::guard_LII_I($VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $intValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)})));
	}
}

int32_t VarHandleGuards::guard_LI_I($VarHandle* handle, Object$* arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $intValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1)})));
	}
}

int64_t VarHandleGuards::guard_L_J($VarHandle* handle, Object$* arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $longValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0})));
	}
}

void VarHandleGuards::guard_LJ_V($VarHandle* handle, Object$* arg0, int64_t arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1)}));
		}
	}
}

bool VarHandleGuards::guard_LJJ_Z($VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)})));
	}
}

int64_t VarHandleGuards::guard_LJJ_J($VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $longValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)})));
	}
}

int64_t VarHandleGuards::guard_LJ_J($VarHandle* handle, Object$* arg0, int64_t arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $longValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1)})));
	}
}

float VarHandleGuards::guard_L_F($VarHandle* handle, Object$* arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $floatValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0})));
	}
}

void VarHandleGuards::guard_LF_V($VarHandle* handle, Object$* arg0, float arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1)}));
		}
	}
}

bool VarHandleGuards::guard_LFF_Z($VarHandle* handle, Object$* arg0, float arg1, float arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)})));
	}
}

float VarHandleGuards::guard_LFF_F($VarHandle* handle, Object$* arg0, float arg1, float arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $floatValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)})));
	}
}

float VarHandleGuards::guard_LF_F($VarHandle* handle, Object$* arg0, float arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $floatValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1)})));
	}
}

double VarHandleGuards::guard_L_D($VarHandle* handle, Object$* arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $doubleValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0})));
	}
}

void VarHandleGuards::guard_LD_V($VarHandle* handle, Object$* arg0, double arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1)}));
		}
	}
}

bool VarHandleGuards::guard_LDD_Z($VarHandle* handle, Object$* arg0, double arg1, double arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)})));
	}
}

double VarHandleGuards::guard_LDD_D($VarHandle* handle, Object$* arg0, double arg1, double arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $doubleValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)})));
	}
}

double VarHandleGuards::guard_LD_D($VarHandle* handle, Object$* arg0, double arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $doubleValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1)})));
	}
}

$Object* VarHandleGuards::guard__L($VarHandle* handle, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {handle, $(handle->vform->getMemberName(ad->mode))})));
		return $nc(ad->returnType)->cast(r);
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect())}));
	}
}

void VarHandleGuards::guard_L_V($VarHandle* handle, Object$* arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0}));
		}
	}
}

bool VarHandleGuards::guard_LL_Z($VarHandle* handle, Object$* arg0, Object$* arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, arg1, $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, arg1})));
	}
}

int32_t VarHandleGuards::guard__I($VarHandle* handle, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $intValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect())})));
	}
}

void VarHandleGuards::guard_I_V($VarHandle* handle, int32_t arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0)}));
		}
	}
}

bool VarHandleGuards::guard_II_Z($VarHandle* handle, int32_t arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0), $$of(arg1)})));
	}
}

int32_t VarHandleGuards::guard_II_I($VarHandle* handle, int32_t arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $intValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0), $$of(arg1)})));
	}
}

int32_t VarHandleGuards::guard_I_I($VarHandle* handle, int32_t arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $intValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0)})));
	}
}

int64_t VarHandleGuards::guard__J($VarHandle* handle, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $longValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect())})));
	}
}

void VarHandleGuards::guard_J_V($VarHandle* handle, int64_t arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0)}));
		}
	}
}

bool VarHandleGuards::guard_JJ_Z($VarHandle* handle, int64_t arg0, int64_t arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0), $$of(arg1)})));
	}
}

int64_t VarHandleGuards::guard_JJ_J($VarHandle* handle, int64_t arg0, int64_t arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $longValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0), $$of(arg1)})));
	}
}

int64_t VarHandleGuards::guard_J_J($VarHandle* handle, int64_t arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $longValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0)})));
	}
}

float VarHandleGuards::guard__F($VarHandle* handle, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $floatValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect())})));
	}
}

void VarHandleGuards::guard_F_V($VarHandle* handle, float arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0)}));
		}
	}
}

bool VarHandleGuards::guard_FF_Z($VarHandle* handle, float arg0, float arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0), $$of(arg1)})));
	}
}

float VarHandleGuards::guard_FF_F($VarHandle* handle, float arg0, float arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $floatValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0), $$of(arg1)})));
	}
}

float VarHandleGuards::guard_F_F($VarHandle* handle, float arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $floatValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0)})));
	}
}

double VarHandleGuards::guard__D($VarHandle* handle, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $doubleValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect())})));
	}
}

void VarHandleGuards::guard_D_V($VarHandle* handle, double arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0)}));
		}
	}
}

bool VarHandleGuards::guard_DD_Z($VarHandle* handle, double arg0, double arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0), $$of(arg1)})));
	}
}

double VarHandleGuards::guard_DD_D($VarHandle* handle, double arg0, double arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $doubleValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0), $$of(arg1)})));
	}
}

double VarHandleGuards::guard_D_D($VarHandle* handle, double arg0, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, $$of(arg0), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $doubleValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), $$of(arg0)})));
	}
}

$Object* VarHandleGuards::guard_LI_L($VarHandle* handle, Object$* arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
		return $nc(ad->returnType)->cast(r);
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1)}));
	}
}

void VarHandleGuards::guard_LIL_V($VarHandle* handle, Object$* arg0, int32_t arg1, Object$* arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), arg2, $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), arg2, $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), arg2}));
		}
	}
}

bool VarHandleGuards::guard_LILL_Z($VarHandle* handle, Object$* arg0, int32_t arg1, Object$* arg2, Object$* arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), arg2, arg3, $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), arg2, arg3})));
	}
}

$Object* VarHandleGuards::guard_LILL_L($VarHandle* handle, Object$* arg0, int32_t arg1, Object$* arg2, Object$* arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), arg2, arg3, $(handle->vform->getMemberName(ad->mode))})));
		return $nc(ad->returnType)->cast(r);
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), arg2, arg3}));
	}
}

$Object* VarHandleGuards::guard_LIL_L($VarHandle* handle, Object$* arg0, int32_t arg1, Object$* arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$var($Object, r, $MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), arg2, $(handle->vform->getMemberName(ad->mode))})));
		return $nc(ad->returnType)->cast(r);
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), arg2}));
	}
}

void VarHandleGuards::guard_LII_V($VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)}));
		}
	}
}

bool VarHandleGuards::guard_LIII_Z($VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, int32_t arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $$of(arg3), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int32_t VarHandleGuards::guard_LIII_I($VarHandle* handle, Object$* arg0, int32_t arg1, int32_t arg2, int32_t arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $$of(arg3), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $intValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int64_t VarHandleGuards::guard_LI_J($VarHandle* handle, Object$* arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $longValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1)})));
	}
}

void VarHandleGuards::guard_LIJ_V($VarHandle* handle, Object$* arg0, int32_t arg1, int64_t arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)}));
		}
	}
}

bool VarHandleGuards::guard_LIJJ_Z($VarHandle* handle, Object$* arg0, int32_t arg1, int64_t arg2, int64_t arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $$of(arg3), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int64_t VarHandleGuards::guard_LIJJ_J($VarHandle* handle, Object$* arg0, int32_t arg1, int64_t arg2, int64_t arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $$of(arg3), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $longValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int64_t VarHandleGuards::guard_LIJ_J($VarHandle* handle, Object$* arg0, int32_t arg1, int64_t arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $longValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)})));
	}
}

float VarHandleGuards::guard_LI_F($VarHandle* handle, Object$* arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $floatValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1)})));
	}
}

void VarHandleGuards::guard_LIF_V($VarHandle* handle, Object$* arg0, int32_t arg1, float arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)}));
		}
	}
}

bool VarHandleGuards::guard_LIFF_Z($VarHandle* handle, Object$* arg0, int32_t arg1, float arg2, float arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $$of(arg3), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

float VarHandleGuards::guard_LIFF_F($VarHandle* handle, Object$* arg0, int32_t arg1, float arg2, float arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $$of(arg3), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $floatValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

float VarHandleGuards::guard_LIF_F($VarHandle* handle, Object$* arg0, int32_t arg1, float arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $floatValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $floatValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)})));
	}
}

double VarHandleGuards::guard_LI_D($VarHandle* handle, Object$* arg0, int32_t arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $doubleValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1)})));
	}
}

void VarHandleGuards::guard_LID_V($VarHandle* handle, Object$* arg0, int32_t arg1, double arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)}));
		}
	}
}

bool VarHandleGuards::guard_LIDD_Z($VarHandle* handle, Object$* arg0, int32_t arg1, double arg2, double arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $$of(arg3), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

double VarHandleGuards::guard_LIDD_D($VarHandle* handle, Object$* arg0, int32_t arg1, double arg2, double arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $$of(arg3), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $doubleValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

double VarHandleGuards::guard_LID_D($VarHandle* handle, Object$* arg0, int32_t arg1, double arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $doubleValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $doubleValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)})));
	}
}

int32_t VarHandleGuards::guard_LJ_I($VarHandle* handle, Object$* arg0, int64_t arg1, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $intValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1)})));
	}
}

void VarHandleGuards::guard_LJI_V($VarHandle* handle, Object$* arg0, int64_t arg1, int32_t arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)}));
		}
	}
}

bool VarHandleGuards::guard_LJII_Z($VarHandle* handle, Object$* arg0, int64_t arg1, int32_t arg2, int32_t arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $$of(arg3), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int32_t VarHandleGuards::guard_LJII_I($VarHandle* handle, Object$* arg0, int64_t arg1, int32_t arg2, int32_t arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $$of(arg3), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $intValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int32_t VarHandleGuards::guard_LJI_I($VarHandle* handle, Object$* arg0, int64_t arg1, int32_t arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $intValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $intValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)})));
	}
}

void VarHandleGuards::guard_LJJ_V($VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))}));
	} else {
		bool var$0 = handle->isDirect();
		if (var$0 && $nc(handle->vform)->getMethodType_V($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
			$MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $(handle->vform->getMemberName(ad->mode))}));
		} else {
			$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
			$$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2)}));
		}
	}
}

bool VarHandleGuards::guard_LJJJ_Z($VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, int64_t arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $booleanValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $$of(arg3), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $booleanValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

int64_t VarHandleGuards::guard_LJJJ_J($VarHandle* handle, Object$* arg0, int64_t arg1, int64_t arg2, int64_t arg3, $VarHandle$AccessDescriptor* ad) {
	$useLocalObjectStack();
	$nc(handle)->checkExactAccessMode(ad);
	if (handle->isDirect() && $nc($nc(handle->vform)->methodType_table)->get($nc(ad)->type) == $nc(ad)->symbolicMethodTypeErased) {
		return $longValue($MethodHandle::linkToStatic($$new($ObjectArray, {handle, arg0, $$of(arg1), $$of(arg2), $$of(arg3), $(handle->vform->getMemberName(ad->mode))})));
	} else {
		$var($MethodHandle, mh, handle->getMethodHandle($nc(ad)->mode));
		return $longValue($$nc($nc(mh)->asType(ad->symbolicMethodTypeInvoker))->invokeBasic($$new($ObjectArray, {$(handle->asDirect()), arg0, $$of(arg1), $$of(arg2), $$of(arg3)})));
	}
}

VarHandleGuards::VarHandleGuards() {
}

$Class* VarHandleGuards::load$($String* name, bool initialize) {
	$CompoundAttribute guard_DD_DmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_DD_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_D_DmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_D_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_FF_FmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_FF_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_F_FmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_F_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_II_ImethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_II_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_I_ImethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_I_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_JJ_JmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_JJ_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_J_JmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_J_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LDD_DmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LDD_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LD_DmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LD_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LFF_FmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LFF_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LF_FmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LF_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIDD_DmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIDD_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LID_DmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LID_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIFF_FmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIFF_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIF_FmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIF_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIII_ImethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIII_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LII_ImethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LII_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LII_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIJJ_JmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIJJ_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIJ_JmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIJ_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LILL_LmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LILL_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIL_LmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LIL_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LI_DmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LI_FmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LI_ImethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LI_JmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LI_LmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LI_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LJII_ImethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LJII_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LJI_ImethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LJI_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LJJJ_JmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LJJJ_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LJJ_JmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LJJ_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LJJ_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LJ_ImethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LJ_JmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LJ_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LLL_LmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LLL_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LL_LmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LL_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_LL_ZmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_L_DmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_L_FmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_L_ImethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_L_JmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_L_LmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard_L_VmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard__DmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard__FmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard__ImethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard__JmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$CompoundAttribute guard__LmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljava/lang/invoke/LambdaForm$Compiled;", nullptr},
		{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleGuards, init$, void)},
		{"guard_DD_D", "(Ljava/lang/invoke/VarHandle;DDLjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_DD_D, double, $VarHandle*, double, double, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_DD_DmethodAnnotations$$},
		{"guard_DD_Z", "(Ljava/lang/invoke/VarHandle;DDLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_DD_Z, bool, $VarHandle*, double, double, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_DD_ZmethodAnnotations$$},
		{"guard_D_D", "(Ljava/lang/invoke/VarHandle;DLjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_D_D, double, $VarHandle*, double, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_D_DmethodAnnotations$$},
		{"guard_D_V", "(Ljava/lang/invoke/VarHandle;DLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_D_V, void, $VarHandle*, double, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_D_VmethodAnnotations$$},
		{"guard_FF_F", "(Ljava/lang/invoke/VarHandle;FFLjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_FF_F, float, $VarHandle*, float, float, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_FF_FmethodAnnotations$$},
		{"guard_FF_Z", "(Ljava/lang/invoke/VarHandle;FFLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_FF_Z, bool, $VarHandle*, float, float, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_FF_ZmethodAnnotations$$},
		{"guard_F_F", "(Ljava/lang/invoke/VarHandle;FLjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_F_F, float, $VarHandle*, float, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_F_FmethodAnnotations$$},
		{"guard_F_V", "(Ljava/lang/invoke/VarHandle;FLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_F_V, void, $VarHandle*, float, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_F_VmethodAnnotations$$},
		{"guard_II_I", "(Ljava/lang/invoke/VarHandle;IILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_II_I, int32_t, $VarHandle*, int32_t, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_II_ImethodAnnotations$$},
		{"guard_II_Z", "(Ljava/lang/invoke/VarHandle;IILjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_II_Z, bool, $VarHandle*, int32_t, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_II_ZmethodAnnotations$$},
		{"guard_I_I", "(Ljava/lang/invoke/VarHandle;ILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_I_I, int32_t, $VarHandle*, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_I_ImethodAnnotations$$},
		{"guard_I_V", "(Ljava/lang/invoke/VarHandle;ILjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_I_V, void, $VarHandle*, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_I_VmethodAnnotations$$},
		{"guard_JJ_J", "(Ljava/lang/invoke/VarHandle;JJLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_JJ_J, int64_t, $VarHandle*, int64_t, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_JJ_JmethodAnnotations$$},
		{"guard_JJ_Z", "(Ljava/lang/invoke/VarHandle;JJLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_JJ_Z, bool, $VarHandle*, int64_t, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_JJ_ZmethodAnnotations$$},
		{"guard_J_J", "(Ljava/lang/invoke/VarHandle;JLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_J_J, int64_t, $VarHandle*, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_J_JmethodAnnotations$$},
		{"guard_J_V", "(Ljava/lang/invoke/VarHandle;JLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_J_V, void, $VarHandle*, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_J_VmethodAnnotations$$},
		{"guard_LDD_D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DDLjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LDD_D, double, $VarHandle*, Object$*, double, double, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LDD_DmethodAnnotations$$},
		{"guard_LDD_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DDLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LDD_Z, bool, $VarHandle*, Object$*, double, double, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LDD_ZmethodAnnotations$$},
		{"guard_LD_D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DLjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LD_D, double, $VarHandle*, Object$*, double, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LD_DmethodAnnotations$$},
		{"guard_LD_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LD_V, void, $VarHandle*, Object$*, double, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LD_VmethodAnnotations$$},
		{"guard_LFF_F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FFLjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LFF_F, float, $VarHandle*, Object$*, float, float, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LFF_FmethodAnnotations$$},
		{"guard_LFF_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FFLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LFF_Z, bool, $VarHandle*, Object$*, float, float, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LFF_ZmethodAnnotations$$},
		{"guard_LF_F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FLjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LF_F, float, $VarHandle*, Object$*, float, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LF_FmethodAnnotations$$},
		{"guard_LF_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LF_V, void, $VarHandle*, Object$*, float, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LF_VmethodAnnotations$$},
		{"guard_LIDD_D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDDLjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIDD_D, double, $VarHandle*, Object$*, int32_t, double, double, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIDD_DmethodAnnotations$$},
		{"guard_LIDD_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDDLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIDD_Z, bool, $VarHandle*, Object$*, int32_t, double, double, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIDD_ZmethodAnnotations$$},
		{"guard_LID_D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDLjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LID_D, double, $VarHandle*, Object$*, int32_t, double, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LID_DmethodAnnotations$$},
		{"guard_LID_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LID_V, void, $VarHandle*, Object$*, int32_t, double, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LID_VmethodAnnotations$$},
		{"guard_LIFF_F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFFLjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIFF_F, float, $VarHandle*, Object$*, int32_t, float, float, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIFF_FmethodAnnotations$$},
		{"guard_LIFF_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFFLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIFF_Z, bool, $VarHandle*, Object$*, int32_t, float, float, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIFF_ZmethodAnnotations$$},
		{"guard_LIF_F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFLjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIF_F, float, $VarHandle*, Object$*, int32_t, float, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIF_FmethodAnnotations$$},
		{"guard_LIF_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIF_V, void, $VarHandle*, Object$*, int32_t, float, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIF_VmethodAnnotations$$},
		{"guard_LIII_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IIILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIII_I, int32_t, $VarHandle*, Object$*, int32_t, int32_t, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIII_ImethodAnnotations$$},
		{"guard_LIII_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IIILjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIII_Z, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIII_ZmethodAnnotations$$},
		{"guard_LII_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LII_I, int32_t, $VarHandle*, Object$*, int32_t, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LII_ImethodAnnotations$$},
		{"guard_LII_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IILjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LII_V, void, $VarHandle*, Object$*, int32_t, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LII_VmethodAnnotations$$},
		{"guard_LII_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IILjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LII_Z, bool, $VarHandle*, Object$*, int32_t, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LII_ZmethodAnnotations$$},
		{"guard_LIJJ_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIJJ_J, int64_t, $VarHandle*, Object$*, int32_t, int64_t, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIJJ_JmethodAnnotations$$},
		{"guard_LIJJ_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIJJ_Z, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIJJ_ZmethodAnnotations$$},
		{"guard_LIJ_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIJ_J, int64_t, $VarHandle*, Object$*, int32_t, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIJ_JmethodAnnotations$$},
		{"guard_LIJ_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIJ_V, void, $VarHandle*, Object$*, int32_t, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIJ_VmethodAnnotations$$},
		{"guard_LILL_L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LILL_L, $Object*, $VarHandle*, Object$*, int32_t, Object$*, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LILL_LmethodAnnotations$$},
		{"guard_LILL_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LILL_Z, bool, $VarHandle*, Object$*, int32_t, Object$*, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LILL_ZmethodAnnotations$$},
		{"guard_LIL_L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIL_L, $Object*, $VarHandle*, Object$*, int32_t, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIL_LmethodAnnotations$$},
		{"guard_LIL_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LIL_V, void, $VarHandle*, Object$*, int32_t, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LIL_VmethodAnnotations$$},
		{"guard_LI_D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LI_D, double, $VarHandle*, Object$*, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LI_DmethodAnnotations$$},
		{"guard_LI_F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LI_F, float, $VarHandle*, Object$*, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LI_FmethodAnnotations$$},
		{"guard_LI_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LI_I, int32_t, $VarHandle*, Object$*, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LI_ImethodAnnotations$$},
		{"guard_LI_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LI_J, int64_t, $VarHandle*, Object$*, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LI_JmethodAnnotations$$},
		{"guard_LI_L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LI_L, $Object*, $VarHandle*, Object$*, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LI_LmethodAnnotations$$},
		{"guard_LI_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LI_V, void, $VarHandle*, Object$*, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LI_VmethodAnnotations$$},
		{"guard_LJII_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JIILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LJII_I, int32_t, $VarHandle*, Object$*, int64_t, int32_t, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LJII_ImethodAnnotations$$},
		{"guard_LJII_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JIILjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LJII_Z, bool, $VarHandle*, Object$*, int64_t, int32_t, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LJII_ZmethodAnnotations$$},
		{"guard_LJI_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JILjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LJI_I, int32_t, $VarHandle*, Object$*, int64_t, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LJI_ImethodAnnotations$$},
		{"guard_LJI_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JILjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LJI_V, void, $VarHandle*, Object$*, int64_t, int32_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LJI_VmethodAnnotations$$},
		{"guard_LJJJ_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LJJJ_J, int64_t, $VarHandle*, Object$*, int64_t, int64_t, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LJJJ_JmethodAnnotations$$},
		{"guard_LJJJ_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LJJJ_Z, bool, $VarHandle*, Object$*, int64_t, int64_t, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LJJJ_ZmethodAnnotations$$},
		{"guard_LJJ_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LJJ_J, int64_t, $VarHandle*, Object$*, int64_t, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LJJ_JmethodAnnotations$$},
		{"guard_LJJ_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LJJ_V, void, $VarHandle*, Object$*, int64_t, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LJJ_VmethodAnnotations$$},
		{"guard_LJJ_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJLjava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LJJ_Z, bool, $VarHandle*, Object$*, int64_t, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LJJ_ZmethodAnnotations$$},
		{"guard_LJ_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JLjava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LJ_I, int32_t, $VarHandle*, Object$*, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LJ_ImethodAnnotations$$},
		{"guard_LJ_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JLjava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LJ_J, int64_t, $VarHandle*, Object$*, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LJ_JmethodAnnotations$$},
		{"guard_LJ_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JLjava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LJ_V, void, $VarHandle*, Object$*, int64_t, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LJ_VmethodAnnotations$$},
		{"guard_LLL_L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LLL_L, $Object*, $VarHandle*, Object$*, Object$*, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LLL_LmethodAnnotations$$},
		{"guard_LLL_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LLL_Z, bool, $VarHandle*, Object$*, Object$*, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LLL_ZmethodAnnotations$$},
		{"guard_LL_L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LL_L, $Object*, $VarHandle*, Object$*, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LL_LmethodAnnotations$$},
		{"guard_LL_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LL_V, void, $VarHandle*, Object$*, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LL_VmethodAnnotations$$},
		{"guard_LL_Z", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Z", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_LL_Z, bool, $VarHandle*, Object$*, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_LL_ZmethodAnnotations$$},
		{"guard_L_D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_L_D, double, $VarHandle*, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_L_DmethodAnnotations$$},
		{"guard_L_F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_L_F, float, $VarHandle*, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_L_FmethodAnnotations$$},
		{"guard_L_I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_L_I, int32_t, $VarHandle*, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_L_ImethodAnnotations$$},
		{"guard_L_J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_L_J, int64_t, $VarHandle*, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_L_JmethodAnnotations$$},
		{"guard_L_L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_L_L, $Object*, $VarHandle*, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_L_LmethodAnnotations$$},
		{"guard_L_V", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard_L_V, void, $VarHandle*, Object$*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard_L_VmethodAnnotations$$},
		{"guard__D", "(Ljava/lang/invoke/VarHandle;Ljava/lang/invoke/VarHandle$AccessDescriptor;)D", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard__D, double, $VarHandle*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard__DmethodAnnotations$$},
		{"guard__F", "(Ljava/lang/invoke/VarHandle;Ljava/lang/invoke/VarHandle$AccessDescriptor;)F", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard__F, float, $VarHandle*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard__FmethodAnnotations$$},
		{"guard__I", "(Ljava/lang/invoke/VarHandle;Ljava/lang/invoke/VarHandle$AccessDescriptor;)I", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard__I, int32_t, $VarHandle*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard__ImethodAnnotations$$},
		{"guard__J", "(Ljava/lang/invoke/VarHandle;Ljava/lang/invoke/VarHandle$AccessDescriptor;)J", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard__J, int64_t, $VarHandle*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard__JmethodAnnotations$$},
		{"guard__L", "(Ljava/lang/invoke/VarHandle;Ljava/lang/invoke/VarHandle$AccessDescriptor;)Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticMethod(VarHandleGuards, guard__L, $Object*, $VarHandle*, $VarHandle$AccessDescriptor*), "java.lang.Throwable", nullptr, guard__LmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleGuards",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(VarHandleGuards, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleGuards);
	});
	return class$;
}

$Class* VarHandleGuards::class$ = nullptr;

		} // invoke
	} // lang
} // java