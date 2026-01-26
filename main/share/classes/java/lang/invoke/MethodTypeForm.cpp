#include <java/lang/invoke/MethodTypeForm.h>

#include <java/lang/AssertionError.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/ref/SoftReference.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef ERASE
#undef LF_COLLECTOR
#undef LF_CS_LINKER
#undef LF_DELEGATE
#undef LF_DELEGATE_BLOCK_INLINING
#undef LF_EX_INVOKER
#undef LF_EX_LINKER
#undef LF_GEN_INVOKER
#undef LF_GEN_LINKER
#undef LF_GWC
#undef LF_GWT
#undef LF_INTERPRET
#undef LF_INVINTERFACE
#undef LF_INVNATIVE
#undef LF_INVSPECIAL
#undef LF_INVSPECIAL_IFC
#undef LF_INVSTATIC
#undef LF_INVSTATIC_INIT
#undef LF_INVVIRTUAL
#undef LF_LIMIT
#undef LF_LOOP
#undef LF_MH_LINKER
#undef LF_NEWINVSPECIAL
#undef LF_REBIND
#undef LF_TF
#undef LF_VH_EX_INVOKER
#undef LF_VH_GEN_INVOKER
#undef LF_VH_GEN_LINKER
#undef MH_BASIC_INV
#undef MH_LIMIT
#undef MH_NF_INV
#undef MH_UNINIT_CS
#undef TYPE
#undef UNWRAP
#undef WRAP

using $SoftReferenceArray = $Array<::java::lang::ref::SoftReference>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodTypeForm_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodTypeForm, $assertionsDisabled)},
	{"parameterSlotCount", "S", nullptr, $FINAL, $field(MethodTypeForm, parameterSlotCount$)},
	{"primitiveCount", "S", nullptr, $FINAL, $field(MethodTypeForm, primitiveCount)},
	{"erasedType", "Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(MethodTypeForm, erasedType$)},
	{"basicType", "Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(MethodTypeForm, basicType$)},
	{"methodHandles", "[Ljava/lang/ref/SoftReference;", "[Ljava/lang/ref/SoftReference<Ljava/lang/invoke/MethodHandle;>;", $FINAL, $field(MethodTypeForm, methodHandles)},
	{"MH_BASIC_INV", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, MH_BASIC_INV)},
	{"MH_NF_INV", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, MH_NF_INV)},
	{"MH_UNINIT_CS", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, MH_UNINIT_CS)},
	{"MH_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, MH_LIMIT)},
	{"lambdaForms", "[Ljava/lang/ref/SoftReference;", "[Ljava/lang/ref/SoftReference<Ljava/lang/invoke/LambdaForm;>;", $FINAL, $field(MethodTypeForm, lambdaForms)},
	{"LF_INVVIRTUAL", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_INVVIRTUAL)},
	{"LF_INVSTATIC", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_INVSTATIC)},
	{"LF_INVSPECIAL", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_INVSPECIAL)},
	{"LF_NEWINVSPECIAL", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_NEWINVSPECIAL)},
	{"LF_INVINTERFACE", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_INVINTERFACE)},
	{"LF_INVSTATIC_INIT", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_INVSTATIC_INIT)},
	{"LF_INTERPRET", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_INTERPRET)},
	{"LF_REBIND", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_REBIND)},
	{"LF_DELEGATE", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_DELEGATE)},
	{"LF_DELEGATE_BLOCK_INLINING", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_DELEGATE_BLOCK_INLINING)},
	{"LF_EX_LINKER", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_EX_LINKER)},
	{"LF_EX_INVOKER", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_EX_INVOKER)},
	{"LF_GEN_LINKER", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_GEN_LINKER)},
	{"LF_GEN_INVOKER", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_GEN_INVOKER)},
	{"LF_CS_LINKER", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_CS_LINKER)},
	{"LF_MH_LINKER", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_MH_LINKER)},
	{"LF_GWC", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_GWC)},
	{"LF_GWT", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_GWT)},
	{"LF_TF", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_TF)},
	{"LF_LOOP", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_LOOP)},
	{"LF_INVSPECIAL_IFC", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_INVSPECIAL_IFC)},
	{"LF_INVNATIVE", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_INVNATIVE)},
	{"LF_VH_EX_INVOKER", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_VH_EX_INVOKER)},
	{"LF_VH_GEN_INVOKER", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_VH_GEN_INVOKER)},
	{"LF_VH_GEN_LINKER", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_VH_GEN_LINKER)},
	{"LF_COLLECTOR", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_COLLECTOR)},
	{"LF_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(MethodTypeForm, LF_LIMIT)},
	{"ERASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MethodTypeForm, ERASE)},
	{"WRAP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MethodTypeForm, WRAP)},
	{"UNWRAP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MethodTypeForm, UNWRAP)},
	{}
};

$MethodInfo _MethodTypeForm_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;)V", nullptr, $PROTECTED, $method(MethodTypeForm, init$, void, $MethodType*)},
	{"basicType", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $method(MethodTypeForm, basicType, $MethodType*)},
	{"cachedLambdaForm", "(I)Ljava/lang/invoke/LambdaForm;", nullptr, $PUBLIC, $method(MethodTypeForm, cachedLambdaForm, $LambdaForm*, int32_t)},
	{"cachedMethodHandle", "(I)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC, $method(MethodTypeForm, cachedMethodHandle, $MethodHandle*, int32_t)},
	{"canonicalize", "(Ljava/lang/invoke/MethodType;I)Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC | $STATIC, $staticMethod(MethodTypeForm, canonicalize, $MethodType*, $MethodType*, int32_t)},
	{"canonicalize", "(Ljava/lang/Class;I)Ljava/lang/Class;", "(Ljava/lang/Class<*>;I)Ljava/lang/Class<*>;", $STATIC, $staticMethod(MethodTypeForm, canonicalize, $Class*, $Class*, int32_t)},
	{"canonicalizeAll", "([Ljava/lang/Class;I)[Ljava/lang/Class;", "([Ljava/lang/Class<*>;I)[Ljava/lang/Class<*>;", $STATIC, $staticMethod(MethodTypeForm, canonicalizeAll, $ClassArray*, $ClassArray*, int32_t)},
	{"erasedType", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $method(MethodTypeForm, erasedType, $MethodType*)},
	{"findForm", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodTypeForm;", nullptr, $STATIC, $staticMethod(MethodTypeForm, findForm, MethodTypeForm*, $MethodType*)},
	{"hasPrimitives", "()Z", nullptr, $PUBLIC, $method(MethodTypeForm, hasPrimitives, bool)},
	{"parameterCount", "()I", nullptr, $PUBLIC, $method(MethodTypeForm, parameterCount, int32_t)},
	{"parameterSlotCount", "()I", nullptr, $PUBLIC, $method(MethodTypeForm, parameterSlotCount, int32_t)},
	{"setCachedLambdaForm", "(ILjava/lang/invoke/LambdaForm;)Ljava/lang/invoke/LambdaForm;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(MethodTypeForm, setCachedLambdaForm, $LambdaForm*, int32_t, $LambdaForm*)},
	{"setCachedMethodHandle", "(ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(MethodTypeForm, setCachedMethodHandle, $MethodHandle*, int32_t, $MethodHandle*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodTypeForm, toString, $String*)},
	{}
};

$ClassInfo _MethodTypeForm_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MethodTypeForm",
	"java.lang.Object",
	nullptr,
	_MethodTypeForm_FieldInfo_,
	_MethodTypeForm_MethodInfo_
};

$Object* allocate$MethodTypeForm($Class* clazz) {
	return $of($alloc(MethodTypeForm));
}

bool MethodTypeForm::$assertionsDisabled = false;

$MethodType* MethodTypeForm::erasedType() {
	return this->erasedType$;
}

$MethodType* MethodTypeForm::basicType() {
	return this->basicType$;
}

$MethodHandle* MethodTypeForm::cachedMethodHandle(int32_t which) {
	$var($SoftReference, entry, $nc(this->methodHandles)->get(which));
	return (entry != nullptr) ? $cast($MethodHandle, $nc(entry)->get()) : ($MethodHandle*)nullptr;
}

$MethodHandle* MethodTypeForm::setCachedMethodHandle(int32_t which, $MethodHandle* mh) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($SoftReference, entry, $nc(this->methodHandles)->get(which));
		if (entry != nullptr) {
			$var($MethodHandle, prev, $cast($MethodHandle, entry->get()));
			if (prev != nullptr) {
				return prev;
			}
		}
		$nc(this->methodHandles)->set(which, $$new($SoftReference, mh));
		return mh;
	}
}

$LambdaForm* MethodTypeForm::cachedLambdaForm(int32_t which) {
	$var($SoftReference, entry, $nc(this->lambdaForms)->get(which));
	return (entry != nullptr) ? $cast($LambdaForm, $nc(entry)->get()) : ($LambdaForm*)nullptr;
}

$LambdaForm* MethodTypeForm::setCachedLambdaForm(int32_t which, $LambdaForm* form) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($SoftReference, entry, $nc(this->lambdaForms)->get(which));
		if (entry != nullptr) {
			$var($LambdaForm, prev, $cast($LambdaForm, entry->get()));
			if (prev != nullptr) {
				return prev;
			}
		}
		$nc(this->lambdaForms)->set(which, $$new($SoftReference, form));
		return form;
	}
}

void MethodTypeForm::init$($MethodType* erasedType) {
	$useLocalCurrentObjectStackCache();
	$set(this, erasedType$, erasedType);
	$var($ClassArray, ptypes, $nc(erasedType)->ptypes());
	int32_t pslotCount = $nc(ptypes)->length;
	int16_t primitiveCount = (int16_t)0;
	int16_t longArgCount = (int16_t)0;
	$var($ClassArray, erasedPtypes, ptypes);
	$var($ClassArray, basicPtypes, erasedPtypes);
	for (int32_t i = 0; i < erasedPtypes->length; ++i) {
		$Class* ptype = erasedPtypes->get(i);
		if (ptype != $Object::class$) {
			++primitiveCount;
			$Wrapper* w = $Wrapper::forPrimitiveType(ptype);
			if ($nc(w)->isDoubleWord()) {
				++longArgCount;
			}
			$init($Integer);
			if ($nc(w)->isSubwordOrInt() && ptype != $Integer::TYPE) {
				if (basicPtypes == erasedPtypes) {
					$assign(basicPtypes, $cast($ClassArray, basicPtypes->clone()));
				}
				basicPtypes->set(i, $Integer::TYPE);
			}
		}
	}
	pslotCount += longArgCount;
	$Class* returnType = $cast($Class, erasedType->returnType());
	$Class* basicReturnType = returnType;
	if (returnType != $Object::class$) {
		++primitiveCount;
		$Wrapper* w = $Wrapper::forPrimitiveType(returnType);
		$init($Integer);
		if ($nc(w)->isSubwordOrInt() && returnType != $Integer::TYPE) {
			basicReturnType = $Integer::TYPE;
		}
	}
	if (erasedPtypes == basicPtypes && basicReturnType == returnType) {
		$set(this, basicType$, erasedType);
		if (pslotCount >= 256) {
			$throw($($MethodHandleStatics::newIllegalArgumentException("too many arguments"_s)));
		}
		this->primitiveCount = primitiveCount;
		this->parameterSlotCount$ = (int16_t)pslotCount;
		$set(this, lambdaForms, $new($SoftReferenceArray, MethodTypeForm::LF_LIMIT));
		$set(this, methodHandles, $new($SoftReferenceArray, MethodTypeForm::MH_LIMIT));
	} else {
		$set(this, basicType$, $MethodType::makeImpl(basicReturnType, basicPtypes, true));
		$var(MethodTypeForm, that, $nc(this->basicType$)->form());
		if (!MethodTypeForm::$assertionsDisabled && !(this != that)) {
			$throwNew($AssertionError);
		}
		this->parameterSlotCount$ = $nc(that)->parameterSlotCount$;
		this->primitiveCount = that->primitiveCount;
		$set(this, methodHandles, nullptr);
		$set(this, lambdaForms, nullptr);
	}
}

int32_t MethodTypeForm::parameterCount() {
	return $nc(this->erasedType$)->parameterCount();
}

int32_t MethodTypeForm::parameterSlotCount() {
	return this->parameterSlotCount$;
}

bool MethodTypeForm::hasPrimitives() {
	return this->primitiveCount != 0;
}

MethodTypeForm* MethodTypeForm::findForm($MethodType* mt) {
	$init(MethodTypeForm);
	$var($MethodType, erased, canonicalize(mt, MethodTypeForm::ERASE));
	if (erased == nullptr) {
		return $new(MethodTypeForm, mt);
	} else {
		return $nc(erased)->form();
	}
}

$MethodType* MethodTypeForm::canonicalize($MethodType* mt, int32_t how) {
	$init(MethodTypeForm);
	$useLocalCurrentObjectStackCache();
	$var($ClassArray, ptypes, $nc(mt)->ptypes());
	$var($ClassArray, ptypesCanonical, canonicalizeAll(ptypes, how));
	$Class* rtype = $cast($Class, mt->returnType());
	$Class* rtypeCanonical = canonicalize(rtype, how);
	if (ptypesCanonical == nullptr && rtypeCanonical == nullptr) {
		return nullptr;
	}
	if (rtypeCanonical == nullptr) {
		rtypeCanonical = rtype;
	}
	if (ptypesCanonical == nullptr) {
		$assign(ptypesCanonical, ptypes);
	}
	return $MethodType::makeImpl(rtypeCanonical, ptypesCanonical, true);
}

$Class* MethodTypeForm::canonicalize($Class* t, int32_t how) {
	$init(MethodTypeForm);
	if (t == $Object::class$) {
	} else if (!t->isPrimitive()) {
		{
			$var($Class, ct, nullptr)
			switch (how) {
			case MethodTypeForm::UNWRAP:
				{
					ct = $Wrapper::asPrimitiveType(t);
					if (ct != t) {
						return ct;
					}
					break;
				}
			case MethodTypeForm::ERASE:
				{
					return $Object::class$;
				}
			}
		}
	} else if (how == MethodTypeForm::WRAP) {
		return $Wrapper::asWrapperType(t);
	}
	return nullptr;
}

$ClassArray* MethodTypeForm::canonicalizeAll($ClassArray* ts, int32_t how) {
	$init(MethodTypeForm);
	$var($ClassArray, cs, nullptr);
	{
		int32_t imax = $nc(ts)->length;
		int32_t i = 0;
		for (; i < imax; ++i) {
			$Class* c = canonicalize(ts->get(i), how);
			$init($Void);
			if (c != nullptr && c != $Void::TYPE) {
				if (cs == nullptr) {
					$assign(cs, $cast($ClassArray, ts->clone()));
				}
				$nc(cs)->set(i, c);
			}
		}
	}
	return cs;
}

$String* MethodTypeForm::toString() {
	return $str({"Form"_s, this->erasedType$});
}

void clinit$MethodTypeForm($Class* class$) {
	MethodTypeForm::$assertionsDisabled = !MethodTypeForm::class$->desiredAssertionStatus();
}

MethodTypeForm::MethodTypeForm() {
}

$Class* MethodTypeForm::load$($String* name, bool initialize) {
	$loadClass(MethodTypeForm, name, initialize, &_MethodTypeForm_ClassInfo_, clinit$MethodTypeForm, allocate$MethodTypeForm);
	return class$;
}

$Class* MethodTypeForm::class$ = nullptr;

		} // invoke
	} // lang
} // java