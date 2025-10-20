#include <java/lang/invoke/LambdaFormEditor.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/BoundMethodHandle$Specializer.h>
#include <java/lang/invoke/BoundMethodHandle$SpeciesData.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/ClassSpecializer$SpeciesData.h>
#include <java/lang/invoke/ClassSpecializer.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm$Name.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/LambdaFormBuffer.h>
#include <java/lang/invoke/LambdaFormEditor$1.h>
#include <java/lang/invoke/LambdaFormEditor$Transform.h>
#include <java/lang/invoke/LambdaFormEditor$TransformKey.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$Intrinsic.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/TypeDescriptor$OfMethod.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef ADD_ARG
#undef ARRAY_LOAD
#undef BIND_ARG
#undef COLLECT_ARGS
#undef COLLECT_ARGS_TO_ARRAY
#undef COLLECT_ARGS_TO_VOID
#undef DUP_ARG
#undef D_TYPE
#undef FILTER_ARG
#undef FILTER_RETURN
#undef FILTER_RETURN_TO_ZERO
#undef FILTER_SELECT_ARGS
#undef FOLD_ARGS
#undef FOLD_ARGS_TO_VOID
#undef FOLD_SELECT_ARGS
#undef FOLD_SELECT_ARGS_TO_VOID
#undef F_TYPE
#undef I_TYPE
#undef J_TYPE
#undef LOCAL_TYPES
#undef L_TYPE
#undef MAX_CACHE_ARRAY_SIZE
#undef MAX_JVM_ARITY
#undef MIN_CACHE_ARRAY_SIZE
#undef PERMUTE_ARGS
#undef REPEAT_FILTER_ARGS
#undef SPECIALIZER
#undef SPREAD_ARGS
#undef TYPE
#undef TYPE_LIMIT
#undef V_TYPE

using $LambdaForm$BasicTypeArray = $Array<::java::lang::invoke::LambdaForm$BasicType>;
using $LambdaForm$NameArray = $Array<::java::lang::invoke::LambdaForm$Name>;
using $LambdaFormEditor$TransformArray = $Array<::java::lang::invoke::LambdaFormEditor$Transform>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $BoundMethodHandle$Specializer = ::java::lang::invoke::BoundMethodHandle$Specializer;
using $BoundMethodHandle$SpeciesData = ::java::lang::invoke::BoundMethodHandle$SpeciesData;
using $ClassSpecializer = ::java::lang::invoke::ClassSpecializer;
using $ClassSpecializer$SpeciesData = ::java::lang::invoke::ClassSpecializer$SpeciesData;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $LambdaForm$Name = ::java::lang::invoke::LambdaForm$Name;
using $LambdaForm$NamedFunction = ::java::lang::invoke::LambdaForm$NamedFunction;
using $LambdaFormBuffer = ::java::lang::invoke::LambdaFormBuffer;
using $LambdaFormEditor$1 = ::java::lang::invoke::LambdaFormEditor$1;
using $LambdaFormEditor$Transform = ::java::lang::invoke::LambdaFormEditor$Transform;
using $LambdaFormEditor$TransformKey = ::java::lang::invoke::LambdaFormEditor$TransformKey;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandleImpl$Intrinsic = ::java::lang::invoke::MethodHandleImpl$Intrinsic;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodType = ::java::lang::invoke::MethodType;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _LambdaFormEditor_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaFormEditor, $assertionsDisabled)},
	{"lambdaForm", "Ljava/lang/invoke/LambdaForm;", nullptr, $FINAL, $field(LambdaFormEditor, lambdaForm)},
	{"BIND_ARG", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, BIND_ARG)},
	{"ADD_ARG", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, ADD_ARG)},
	{"DUP_ARG", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, DUP_ARG)},
	{"SPREAD_ARGS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, SPREAD_ARGS)},
	{"FILTER_ARG", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, FILTER_ARG)},
	{"FILTER_RETURN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, FILTER_RETURN)},
	{"FILTER_RETURN_TO_ZERO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, FILTER_RETURN_TO_ZERO)},
	{"COLLECT_ARGS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, COLLECT_ARGS)},
	{"COLLECT_ARGS_TO_VOID", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, COLLECT_ARGS_TO_VOID)},
	{"COLLECT_ARGS_TO_ARRAY", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, COLLECT_ARGS_TO_ARRAY)},
	{"FOLD_ARGS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, FOLD_ARGS)},
	{"FOLD_ARGS_TO_VOID", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, FOLD_ARGS_TO_VOID)},
	{"PERMUTE_ARGS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, PERMUTE_ARGS)},
	{"LOCAL_TYPES", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, LOCAL_TYPES)},
	{"FOLD_SELECT_ARGS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, FOLD_SELECT_ARGS)},
	{"FOLD_SELECT_ARGS_TO_VOID", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, FOLD_SELECT_ARGS_TO_VOID)},
	{"FILTER_SELECT_ARGS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, FILTER_SELECT_ARGS)},
	{"REPEAT_FILTER_ARGS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, REPEAT_FILTER_ARGS)},
	{"MIN_CACHE_ARRAY_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, MIN_CACHE_ARRAY_SIZE)},
	{"MAX_CACHE_ARRAY_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormEditor, MAX_CACHE_ARRAY_SIZE)},
	{}
};

$MethodInfo _LambdaFormEditor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/LambdaForm;)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaFormEditor::*)($LambdaForm*)>(&LambdaFormEditor::init$))},
	{"addArgumentForm", "(ILjava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/LambdaForm;", nullptr, 0},
	{"bindArgumentD", "(Ljava/lang/invoke/BoundMethodHandle;ID)Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0},
	{"bindArgumentF", "(Ljava/lang/invoke/BoundMethodHandle;IF)Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0},
	{"bindArgumentForm", "(I)Ljava/lang/invoke/LambdaForm;", nullptr, 0},
	{"bindArgumentI", "(Ljava/lang/invoke/BoundMethodHandle;II)Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0},
	{"bindArgumentJ", "(Ljava/lang/invoke/BoundMethodHandle;IJ)Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0},
	{"bindArgumentL", "(Ljava/lang/invoke/BoundMethodHandle;ILjava/lang/Object;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0},
	{"bindArgumentType", "(Ljava/lang/invoke/BoundMethodHandle;ILjava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE, $method(static_cast<$MethodType*(LambdaFormEditor::*)($BoundMethodHandle*,int32_t,$LambdaForm$BasicType*)>(&LambdaFormEditor::bindArgumentType))},
	{"buffer", "()Ljava/lang/invoke/LambdaFormBuffer;", nullptr, $PRIVATE, $method(static_cast<$LambdaFormBuffer*(LambdaFormEditor::*)()>(&LambdaFormEditor::buffer))},
	{"collectArgumentsForm", "(ILjava/lang/invoke/MethodType;)Ljava/lang/invoke/LambdaForm;", nullptr, 0},
	{"collectReturnValueForm", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/LambdaForm;", nullptr, 0},
	{"dupArgumentForm", "(II)Ljava/lang/invoke/LambdaForm;", nullptr, 0},
	{"filterArgumentForm", "(ILjava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/LambdaForm;", nullptr, 0},
	{"filterArgumentsForm", "(ILjava/lang/invoke/MethodType;[I)Ljava/lang/invoke/LambdaForm;", nullptr, $TRANSIENT},
	{"filterRepeatedArgumentForm", "(Ljava/lang/invoke/LambdaForm$BasicType;[I)Ljava/lang/invoke/LambdaForm;", nullptr, $TRANSIENT},
	{"filterReturnForm", "(Ljava/lang/invoke/LambdaForm$BasicType;Z)Ljava/lang/invoke/LambdaForm;", nullptr, 0},
	{"foldArgumentsForm", "(IZLjava/lang/invoke/MethodType;)Ljava/lang/invoke/LambdaForm;", nullptr, 0},
	{"foldArgumentsForm", "(IZLjava/lang/invoke/MethodType;[I)Ljava/lang/invoke/LambdaForm;", nullptr, $TRANSIENT},
	{"formParametersMatch", "(Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/LambdaForm$BasicType;[I)Z", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<bool(LambdaFormEditor::*)($LambdaForm*,$LambdaForm$BasicType*,$ints*)>(&LambdaFormEditor::formParametersMatch))},
	{"getInCache", "(Ljava/lang/invoke/LambdaFormEditor$TransformKey;)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE, $method(static_cast<$LambdaForm*(LambdaFormEditor::*)($LambdaFormEditor$TransformKey*)>(&LambdaFormEditor::getInCache))},
	{"lambdaFormEditor", "(Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/LambdaFormEditor;", nullptr, $STATIC, $method(static_cast<LambdaFormEditor*(*)($LambdaForm*)>(&LambdaFormEditor::lambdaFormEditor))},
	{"makeArgumentCombinationForm", "(ILjava/lang/invoke/MethodType;ZZ)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE, $method(static_cast<$LambdaForm*(LambdaFormEditor::*)(int32_t,$MethodType*,bool,bool)>(&LambdaFormEditor::makeArgumentCombinationForm))},
	{"makeArgumentCombinationForm", "(ILjava/lang/invoke/MethodType;[IZZ)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE, $method(static_cast<$LambdaForm*(LambdaFormEditor::*)(int32_t,$MethodType*,$ints*,bool,bool)>(&LambdaFormEditor::makeArgumentCombinationForm))},
	{"makeRepeatedFilterForm", "(Ljava/lang/invoke/MethodType;[I)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<$LambdaForm*(LambdaFormEditor::*)($MethodType*,$ints*)>(&LambdaFormEditor::makeRepeatedFilterForm))},
	{"newSpeciesData", "(Ljava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $PRIVATE, $method(static_cast<$BoundMethodHandle$SpeciesData*(LambdaFormEditor::*)($LambdaForm$BasicType*)>(&LambdaFormEditor::newSpeciesData))},
	{"noteLoopLocalTypesForm", "(I[Ljava/lang/invoke/LambdaForm$BasicType;)Ljava/lang/invoke/LambdaForm;", nullptr, 0},
	{"oldSpeciesData", "()Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $PRIVATE, $method(static_cast<$BoundMethodHandle$SpeciesData*(LambdaFormEditor::*)()>(&LambdaFormEditor::oldSpeciesData))},
	{"permuteArgumentsForm", "(I[I)Ljava/lang/invoke/LambdaForm;", nullptr, 0},
	{"permutedTypesMatch", "([I[Ljava/lang/invoke/LambdaForm$BasicType;[Ljava/lang/invoke/LambdaForm$Name;I)Z", nullptr, $STATIC, $method(static_cast<bool(*)($ints*,$LambdaForm$BasicTypeArray*,$LambdaForm$NameArray*,int32_t)>(&LambdaFormEditor::permutedTypesMatch))},
	{"putInCache", "(Ljava/lang/invoke/LambdaFormEditor$TransformKey;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE, $method(static_cast<$LambdaForm*(LambdaFormEditor::*)($LambdaFormEditor$TransformKey*,$LambdaForm*)>(&LambdaFormEditor::putInCache))},
	{"spreadArgumentsForm", "(ILjava/lang/Class;I)Ljava/lang/invoke/LambdaForm;", "(ILjava/lang/Class<*>;I)Ljava/lang/invoke/LambdaForm;", 0},
	{}
};

$InnerClassInfo _LambdaFormEditor_InnerClassesInfo_[] = {
	{"java.lang.invoke.LambdaFormEditor$TransformKey", "java.lang.invoke.LambdaFormEditor", "TransformKey", $PRIVATE | $STATIC | $FINAL},
	{"java.lang.invoke.LambdaFormEditor$Transform", "java.lang.invoke.LambdaFormEditor", "Transform", $PRIVATE | $STATIC | $FINAL},
	{"java.lang.invoke.LambdaFormEditor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LambdaFormEditor_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.LambdaFormEditor",
	"java.lang.Object",
	nullptr,
	_LambdaFormEditor_FieldInfo_,
	_LambdaFormEditor_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaFormEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.LambdaFormEditor$TransformKey,java.lang.invoke.LambdaFormEditor$Transform,java.lang.invoke.LambdaFormEditor$1"
};

$Object* allocate$LambdaFormEditor($Class* clazz) {
	return $of($alloc(LambdaFormEditor));
}

bool LambdaFormEditor::$assertionsDisabled = false;

void LambdaFormEditor::init$($LambdaForm* lambdaForm) {
	$set(this, lambdaForm, lambdaForm);
}

LambdaFormEditor* LambdaFormEditor::lambdaFormEditor($LambdaForm* lambdaForm) {
	$init(LambdaFormEditor);
	return $new(LambdaFormEditor, $($nc(lambdaForm)->uncustomize()));
}

$LambdaForm* LambdaFormEditor::getInCache($LambdaFormEditor$TransformKey* key) {
	$useLocalCurrentObjectStackCache();
	$var($Object, c, $nc(this->lambdaForm)->transformCache);
	$var($LambdaFormEditor$Transform, k, nullptr);
	{
		$var($LambdaFormEditor$Transform, t, nullptr);
		if ($instanceOf($ConcurrentHashMap, c)) {
			$var($ConcurrentHashMap, m, $cast($ConcurrentHashMap, c));
			$assign(k, $cast($LambdaFormEditor$Transform, $nc(m)->get(key)));
		} else if (c == nullptr) {
			return nullptr;
		} else {
			bool var$1 = $instanceOf($LambdaFormEditor$Transform, c);
			if (var$1) {
				$assign(t, $cast($LambdaFormEditor$Transform, c));
				var$1 = true;
			}
			if (var$1) {
				if ($nc(t)->equals(key)) {
					$assign(k, t);
				}
			} else {
				$var($LambdaFormEditor$TransformArray, ta, $cast($LambdaFormEditor$TransformArray, c));
				for (int32_t i = 0; i < $nc(ta)->length; ++i) {
					$var($LambdaFormEditor$Transform, t_1, ta->get(i));
					if (t_1 == nullptr) {
						break;
					}
					if ($nc(t_1)->equals(key)) {
						$assign(k, t_1);
						break;
					}
				}
			}
		}
	}
	if (!LambdaFormEditor::$assertionsDisabled && !(k == nullptr || $nc(key)->equals(k))) {
		$throwNew($AssertionError);
	}
	return (k != nullptr) ? $cast($LambdaForm, $nc(k)->get()) : ($LambdaForm*)nullptr;
}

$LambdaForm* LambdaFormEditor::putInCache($LambdaFormEditor$TransformKey* key, $LambdaForm* form) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaFormEditor$Transform, transform, $nc(key)->withResult(form));
	for (int32_t pass = 0;; ++pass) {
		$var($Object, c, $nc(this->lambdaForm)->transformCache);
		if ($instanceOf($ConcurrentHashMap, c)) {
			$var($ConcurrentHashMap, m, $cast($ConcurrentHashMap, c));
			$var($LambdaFormEditor$Transform, k, $cast($LambdaFormEditor$Transform, $nc(m)->putIfAbsent(transform, transform)));
			if (k == nullptr) {
				return form;
			}
			$var($LambdaForm, result, $cast($LambdaForm, $nc(k)->get()));
			if (result != nullptr) {
				return result;
			} else if (m->replace(transform, k, transform)) {
				return form;
			} else {
				continue;
			}
		}
		if (!LambdaFormEditor::$assertionsDisabled && !(pass == 0)) {
			$throwNew($AssertionError);
		}
		$synchronized(this->lambdaForm) {
			$assign(c, $nc(this->lambdaForm)->transformCache);
			if ($instanceOf($ConcurrentHashMap, c)) {
				continue;
			}
			if (c == nullptr) {
				$set($nc(this->lambdaForm), transformCache, transform);
				return form;
			}
			$var($LambdaFormEditor$TransformArray, ta, nullptr);
			{
				$var($LambdaFormEditor$Transform, k, nullptr);
				bool var$0 = $instanceOf($LambdaFormEditor$Transform, c);
				if (var$0) {
					$assign(k, $cast($LambdaFormEditor$Transform, c));
					var$0 = true;
				}
				if (var$0) {
					if ($nc(k)->equals(key)) {
						$var($LambdaForm, result, $cast($LambdaForm, k->get()));
						if (result == nullptr) {
							$set($nc(this->lambdaForm), transformCache, transform);
							return form;
						} else {
							return result;
						}
					} else if (k->get() == nullptr) {
						$set($nc(this->lambdaForm), transformCache, transform);
						return form;
					}
					$assign(ta, $new($LambdaFormEditor$TransformArray, LambdaFormEditor::MIN_CACHE_ARRAY_SIZE));
					ta->set(0, k);
					$set($nc(this->lambdaForm), transformCache, ta);
				} else {
					$assign(ta, $cast($LambdaFormEditor$TransformArray, c));
				}
			}
			int32_t len = $nc(ta)->length;
			int32_t stale = -1;
			int32_t i = 0;
			for (i = 0; i < len; ++i) {
				$var($LambdaFormEditor$Transform, k, ta->get(i));
				if (k == nullptr) {
					break;
				}
				if ($nc(k)->equals(transform)) {
					$var($LambdaForm, result, $cast($LambdaForm, k->get()));
					if (result == nullptr) {
						ta->set(i, transform);
						return form;
					} else {
						return result;
					}
				} else if (stale < 0 && k->get() == nullptr) {
					stale = i;
				}
			}
			if (i < len || stale >= 0) {
			} else if (len < LambdaFormEditor::MAX_CACHE_ARRAY_SIZE) {
				len = $Math::min(len * 2, LambdaFormEditor::MAX_CACHE_ARRAY_SIZE);
				$assign(ta, $fcast($LambdaFormEditor$TransformArray, $Arrays::copyOf(ta, len)));
				$set($nc(this->lambdaForm), transformCache, ta);
			} else {
				$var($ConcurrentHashMap, m, $new($ConcurrentHashMap, LambdaFormEditor::MAX_CACHE_ARRAY_SIZE * 2));
				{
					$var($LambdaFormEditor$TransformArray, arr$, ta);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($LambdaFormEditor$Transform, k, arr$->get(i$));
						{
							m->put(k, k);
						}
					}
				}
				$set($nc(this->lambdaForm), transformCache, m);
				continue;
			}
			int32_t idx = (stale >= 0) ? stale : i;
			ta->set(idx, transform);
			return form;
		}
	}
}

$LambdaFormBuffer* LambdaFormEditor::buffer() {
	return $new($LambdaFormBuffer, this->lambdaForm);
}

$BoundMethodHandle$SpeciesData* LambdaFormEditor::oldSpeciesData() {
	return $BoundMethodHandle::speciesDataFor(this->lambdaForm);
}

$BoundMethodHandle$SpeciesData* LambdaFormEditor::newSpeciesData($LambdaForm$BasicType* type) {
	return $nc($(oldSpeciesData()))->extendWith((int8_t)$nc(type)->ordinal());
}

$BoundMethodHandle* LambdaFormEditor::bindArgumentL($BoundMethodHandle* mh, int32_t pos, Object$* value) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !LambdaFormEditor::$assertionsDisabled;
	if (var$0) {
		var$0 = !($nc(mh)->speciesData() == oldSpeciesData());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	$init($LambdaForm$BasicType);
	$LambdaForm$BasicType* bt = $LambdaForm$BasicType::L_TYPE;
	$var($MethodType, type2, bindArgumentType(mh, pos, bt));
	$var($LambdaForm, form2, bindArgumentForm(1 + pos));
	return $nc(mh)->copyWithExtendL(type2, form2, value);
}

$BoundMethodHandle* LambdaFormEditor::bindArgumentI($BoundMethodHandle* mh, int32_t pos, int32_t value) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !LambdaFormEditor::$assertionsDisabled;
	if (var$0) {
		var$0 = !($nc(mh)->speciesData() == oldSpeciesData());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	$init($LambdaForm$BasicType);
	$LambdaForm$BasicType* bt = $LambdaForm$BasicType::I_TYPE;
	$var($MethodType, type2, bindArgumentType(mh, pos, bt));
	$var($LambdaForm, form2, bindArgumentForm(1 + pos));
	return $nc(mh)->copyWithExtendI(type2, form2, value);
}

$BoundMethodHandle* LambdaFormEditor::bindArgumentJ($BoundMethodHandle* mh, int32_t pos, int64_t value) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !LambdaFormEditor::$assertionsDisabled;
	if (var$0) {
		var$0 = !($nc(mh)->speciesData() == oldSpeciesData());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	$init($LambdaForm$BasicType);
	$LambdaForm$BasicType* bt = $LambdaForm$BasicType::J_TYPE;
	$var($MethodType, type2, bindArgumentType(mh, pos, bt));
	$var($LambdaForm, form2, bindArgumentForm(1 + pos));
	return $nc(mh)->copyWithExtendJ(type2, form2, value);
}

$BoundMethodHandle* LambdaFormEditor::bindArgumentF($BoundMethodHandle* mh, int32_t pos, float value) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !LambdaFormEditor::$assertionsDisabled;
	if (var$0) {
		var$0 = !($nc(mh)->speciesData() == oldSpeciesData());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	$init($LambdaForm$BasicType);
	$LambdaForm$BasicType* bt = $LambdaForm$BasicType::F_TYPE;
	$var($MethodType, type2, bindArgumentType(mh, pos, bt));
	$var($LambdaForm, form2, bindArgumentForm(1 + pos));
	return $nc(mh)->copyWithExtendF(type2, form2, value);
}

$BoundMethodHandle* LambdaFormEditor::bindArgumentD($BoundMethodHandle* mh, int32_t pos, double value) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !LambdaFormEditor::$assertionsDisabled;
	if (var$0) {
		var$0 = !($nc(mh)->speciesData() == oldSpeciesData());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	$init($LambdaForm$BasicType);
	$LambdaForm$BasicType* bt = $LambdaForm$BasicType::D_TYPE;
	$var($MethodType, type2, bindArgumentType(mh, pos, bt));
	$var($LambdaForm, form2, bindArgumentForm(1 + pos));
	return $nc(mh)->copyWithExtendD(type2, form2, value);
}

$MethodType* LambdaFormEditor::bindArgumentType($BoundMethodHandle* mh, int32_t pos, $LambdaForm$BasicType* bt) {
	$useLocalCurrentObjectStackCache();
	if (!LambdaFormEditor::$assertionsDisabled && !($nc($nc(mh)->form)->uncustomize() == this->lambdaForm)) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormEditor::$assertionsDisabled && !($nc($nc($nc($nc(mh)->form)->names)->get(1 + pos))->type$ == bt)) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormEditor::$assertionsDisabled && !($LambdaForm$BasicType::basicType($($cast($Class, $nc($($nc(mh)->type()))->parameterType(pos)))) == bt)) {
		$throwNew($AssertionError);
	}
	return $cast($MethodType, $nc($($nc(mh)->type()))->dropParameterTypes(pos, pos + 1));
}

$LambdaForm* LambdaFormEditor::bindArgumentForm(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaFormEditor$TransformKey, key, $LambdaFormEditor$TransformKey::of(LambdaFormEditor::BIND_ARG, pos));
	$var($LambdaForm, form, getInCache(key));
	if (form != nullptr) {
		bool var$0 = !LambdaFormEditor::$assertionsDisabled;
		if (var$0) {
			var$0 = !($equals(form->parameterConstraint(0), newSpeciesData($($nc(this->lambdaForm)->parameterType(pos)))));
		}
		if (var$0) {
			$throwNew($AssertionError);
		}
		return form;
	}
	$var($LambdaFormBuffer, buf, buffer());
	$nc(buf)->startEdit();
	$var($BoundMethodHandle$SpeciesData, oldData, oldSpeciesData());
	$var($BoundMethodHandle$SpeciesData, newData, newSpeciesData($($nc(this->lambdaForm)->parameterType(pos))));
	$var($LambdaForm$Name, oldBaseAddress, $nc(this->lambdaForm)->parameter(0));
	$var($LambdaForm$Name, newBaseAddress, nullptr);
	$var($LambdaForm$NamedFunction, getter, $nc(newData)->getterFunction($nc(oldData)->fieldCount()));
	if (pos != 0) {
		$var($List, var$1, $nc(oldData)->getterFunctions());
		buf->replaceFunctions(var$1, $(newData->getterFunctions()), $$new($ObjectArray, {$of(oldBaseAddress)}));
		$assign(newBaseAddress, $nc(oldBaseAddress)->withConstraint(newData));
		buf->renameParameter(0, newBaseAddress);
		buf->replaceParameterByNewExpression(pos, $$new($LambdaForm$Name, getter, $$new($ObjectArray, {$of(newBaseAddress)})));
	} else {
		$init($BoundMethodHandle);
		if (!LambdaFormEditor::$assertionsDisabled && !($equals(oldData, $nc($BoundMethodHandle::SPECIALIZER)->topSpecies()))) {
			$throwNew($AssertionError);
		}
		$init($LambdaForm$BasicType);
		$assign(newBaseAddress, $$new($LambdaForm$Name, $LambdaForm$BasicType::L_TYPE)->withConstraint(newData));
		buf->replaceParameterByNewExpression(0, $$new($LambdaForm$Name, getter, $$new($ObjectArray, {$of(newBaseAddress)})));
		buf->insertParameter(0, newBaseAddress);
	}
	$assign(form, buf->endEdit());
	return putInCache(key, form);
}

$LambdaForm* LambdaFormEditor::addArgumentForm(int32_t pos, $LambdaForm$BasicType* type) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaFormEditor$TransformKey, key, $LambdaFormEditor$TransformKey::of(LambdaFormEditor::ADD_ARG, pos, $nc(type)->ordinal()));
	$var($LambdaForm, form, getInCache(key));
	if (form != nullptr) {
		if (!LambdaFormEditor::$assertionsDisabled && !(form->arity$ == $nc(this->lambdaForm)->arity$ + 1)) {
			$throwNew($AssertionError);
		}
		if (!LambdaFormEditor::$assertionsDisabled && !(form->parameterType(pos) == type)) {
			$throwNew($AssertionError);
		}
		return form;
	}
	$var($LambdaFormBuffer, buf, buffer());
	$nc(buf)->startEdit();
	buf->insertParameter(pos, $$new($LambdaForm$Name, type));
	$assign(form, buf->endEdit());
	return putInCache(key, form);
}

$LambdaForm* LambdaFormEditor::dupArgumentForm(int32_t srcPos, int32_t dstPos) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaFormEditor$TransformKey, key, $LambdaFormEditor$TransformKey::of(LambdaFormEditor::DUP_ARG, srcPos, dstPos));
	$var($LambdaForm, form, getInCache(key));
	if (form != nullptr) {
		if (!LambdaFormEditor::$assertionsDisabled && !(form->arity$ == $nc(this->lambdaForm)->arity$ - 1)) {
			$throwNew($AssertionError);
		}
		return form;
	}
	$var($LambdaFormBuffer, buf, buffer());
	$nc(buf)->startEdit();
	if (!LambdaFormEditor::$assertionsDisabled && !($nc($($nc(this->lambdaForm)->parameter(srcPos)))->constraint == nullptr)) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormEditor::$assertionsDisabled && !($nc($($nc(this->lambdaForm)->parameter(dstPos)))->constraint == nullptr)) {
		$throwNew($AssertionError);
	}
	buf->replaceParameterByCopy(dstPos, srcPos);
	$assign(form, buf->endEdit());
	return putInCache(key, form);
}

$LambdaForm* LambdaFormEditor::spreadArgumentsForm(int32_t pos, $Class* arrayType, int32_t arrayLength) {
	$useLocalCurrentObjectStackCache();
	$Class* elementType = $nc(arrayType)->getComponentType();
	$Class* erasedArrayType = arrayType;
	if (!$nc(elementType)->isPrimitive()) {
		$load($ObjectArray);
		erasedArrayType = $getClass($ObjectArray);
	}
	$LambdaForm$BasicType* bt = $LambdaForm$BasicType::basicType(elementType);
	int32_t elementTypeKey = $nc(bt)->ordinal();
	if (bt->basicTypeClass() != elementType) {
		if ($nc(elementType)->isPrimitive()) {
			elementTypeKey = $LambdaForm$BasicType::TYPE_LIMIT + $nc($($Wrapper::forPrimitiveType(elementType)))->ordinal();
		}
	}
	$var($LambdaFormEditor$TransformKey, key, $LambdaFormEditor$TransformKey::of(LambdaFormEditor::SPREAD_ARGS, pos, elementTypeKey, arrayLength));
	$var($LambdaForm, form, getInCache(key));
	if (form != nullptr) {
		if (!LambdaFormEditor::$assertionsDisabled && !(form->arity$ == $nc(this->lambdaForm)->arity$ - arrayLength + 1)) {
			$throwNew($AssertionError);
		}
		return form;
	}
	$var($LambdaFormBuffer, buf, buffer());
	$nc(buf)->startEdit();
	if (!LambdaFormEditor::$assertionsDisabled && !(pos <= $MethodType::MAX_JVM_ARITY)) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormEditor::$assertionsDisabled && !(pos + arrayLength <= $nc(this->lambdaForm)->arity$)) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormEditor::$assertionsDisabled && !(pos > 0)) {
		$throwNew($AssertionError);
	}
	$var($LambdaForm$Name, spreadParam, $new($LambdaForm$Name, $LambdaForm$BasicType::L_TYPE));
	$var($LambdaForm$NamedFunction, var$0, $MethodHandleImpl::getFunction($MethodHandleImpl::NF_checkSpreadArgument));
	$var($LambdaForm$Name, checkSpread, $new($LambdaForm$Name, var$0, $$new($ObjectArray, {
		$of(spreadParam),
		$($of($Integer::valueOf(arrayLength)))
	})));
	int32_t exprPos = $nc(this->lambdaForm)->arity();
	buf->insertExpression(exprPos++, checkSpread);
	$var($MethodHandle, aload, $MethodHandles::arrayElementGetter(erasedArrayType));
	for (int32_t i = 0; i < arrayLength; ++i) {
		$init($MethodHandleImpl$Intrinsic);
		$var($LambdaForm$NamedFunction, var$1, $new($LambdaForm$NamedFunction, $($MethodHandleImpl::makeIntrinsic(aload, $MethodHandleImpl$Intrinsic::ARRAY_LOAD))));
		$var($LambdaForm$Name, loadArgument, $new($LambdaForm$Name, var$1, $$new($ObjectArray, {
			$of(spreadParam),
			$($of($Integer::valueOf(i)))
		})));
		buf->insertExpression(exprPos + i, loadArgument);
		buf->replaceParameterByCopy(pos + i, exprPos + i);
	}
	buf->insertParameter(pos, spreadParam);
	$assign(form, buf->endEdit());
	return putInCache(key, form);
}

$LambdaForm* LambdaFormEditor::collectArgumentsForm(int32_t pos, $MethodType* collectorType) {
	$useLocalCurrentObjectStackCache();
	int32_t collectorArity = $nc(collectorType)->parameterCount();
	$init($Void);
	bool dropResult = ($cast($Class, collectorType->returnType()) == $Void::TYPE);
	if (collectorArity == 1 && !dropResult) {
		return filterArgumentForm(pos, $($LambdaForm$BasicType::basicType($($cast($Class, collectorType->parameterType(0))))));
	}
	$var($bytes, newTypes, $LambdaForm$BasicType::basicTypesOrd($(collectorType->ptypes())));
	int8_t kind = (dropResult ? LambdaFormEditor::COLLECT_ARGS_TO_VOID : LambdaFormEditor::COLLECT_ARGS);
	if (dropResult && collectorArity == 0) {
		pos = 1;
	}
	$var($LambdaFormEditor$TransformKey, key, $LambdaFormEditor$TransformKey::of(kind, pos, collectorArity, newTypes));
	$var($LambdaForm, form, getInCache(key));
	if (form != nullptr) {
		if (!LambdaFormEditor::$assertionsDisabled && !(form->arity$ == $nc(this->lambdaForm)->arity$ - (dropResult ? 0 : 1) + collectorArity)) {
			$throwNew($AssertionError);
		}
		return form;
	}
	$assign(form, makeArgumentCombinationForm(pos, collectorType, false, dropResult));
	return putInCache(key, form);
}

$LambdaForm* LambdaFormEditor::filterArgumentForm(int32_t pos, $LambdaForm$BasicType* newType) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaFormEditor$TransformKey, key, $LambdaFormEditor$TransformKey::of(LambdaFormEditor::FILTER_ARG, pos, $nc(newType)->ordinal()));
	$var($LambdaForm, form, getInCache(key));
	if (form != nullptr) {
		if (!LambdaFormEditor::$assertionsDisabled && !(form->arity$ == $nc(this->lambdaForm)->arity$)) {
			$throwNew($AssertionError);
		}
		if (!LambdaFormEditor::$assertionsDisabled && !(form->parameterType(pos) == newType)) {
			$throwNew($AssertionError);
		}
		return form;
	}
	$LambdaForm$BasicType* oldType = $nc(this->lambdaForm)->parameterType(pos);
	$Class* var$0 = $nc(oldType)->basicTypeClass();
	$var($MethodType, filterType, $MethodType::methodType(var$0, $nc(newType)->basicTypeClass()));
	$assign(form, makeArgumentCombinationForm(pos, filterType, false, false));
	return putInCache(key, form);
}

$LambdaForm* LambdaFormEditor::filterRepeatedArgumentForm($LambdaForm$BasicType* newType, $ints* argPositions) {
	$useLocalCurrentObjectStackCache();
	if (!LambdaFormEditor::$assertionsDisabled && !($nc(argPositions)->length > 1)) {
		$throwNew($AssertionError);
	}
	$var($LambdaFormEditor$TransformKey, key, $LambdaFormEditor$TransformKey::of(LambdaFormEditor::REPEAT_FILTER_ARGS, $nc(newType)->ordinal(), argPositions));
	$var($LambdaForm, form, getInCache(key));
	if (form != nullptr) {
		if (!LambdaFormEditor::$assertionsDisabled && !(form->arity$ == $nc(this->lambdaForm)->arity$ && formParametersMatch(form, newType, argPositions))) {
			$throwNew($AssertionError);
		}
		return form;
	}
	$LambdaForm$BasicType* oldType = $nc(this->lambdaForm)->parameterType($nc(argPositions)->get(0));
	$Class* var$0 = $nc(oldType)->basicTypeClass();
	$var($MethodType, filterType, $MethodType::methodType(var$0, $nc(newType)->basicTypeClass()));
	$assign(form, makeRepeatedFilterForm(filterType, argPositions));
	if (!LambdaFormEditor::$assertionsDisabled && !(formParametersMatch(form, newType, argPositions))) {
		$throwNew($AssertionError);
	}
	return putInCache(key, form);
}

bool LambdaFormEditor::formParametersMatch($LambdaForm* form, $LambdaForm$BasicType* newType, $ints* argPositions) {
	{
		$var($ints, arr$, argPositions);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t i = arr$->get(i$);
			{
				if ($nc(form)->parameterType(i) != newType) {
					return false;
				}
			}
		}
	}
	return true;
}

$LambdaForm* LambdaFormEditor::makeRepeatedFilterForm($MethodType* combinerType, $ints* positions) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !LambdaFormEditor::$assertionsDisabled;
	if (var$0) {
		bool var$2 = $nc(combinerType)->parameterCount() == 1;
		bool var$1 = var$2 && combinerType == combinerType->basicType();
		$init($Void);
		var$0 = !(var$1 && $cast($Class, combinerType->returnType()) != $Void::TYPE);
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	$var($LambdaFormBuffer, buf, buffer());
	$nc(buf)->startEdit();
	$var($BoundMethodHandle$SpeciesData, oldData, oldSpeciesData());
	$init($LambdaForm$BasicType);
	$var($BoundMethodHandle$SpeciesData, newData, newSpeciesData($LambdaForm$BasicType::L_TYPE));
	$var($LambdaForm$Name, oldBaseAddress, $nc(this->lambdaForm)->parameter(0));
	$var($List, var$3, $nc(oldData)->getterFunctions());
	buf->replaceFunctions(var$3, $($nc(newData)->getterFunctions()), $$new($ObjectArray, {$of(oldBaseAddress)}));
	$var($LambdaForm$Name, newBaseAddress, $nc(oldBaseAddress)->withConstraint(newData));
	buf->renameParameter(0, newBaseAddress);
	int32_t exprPos = $nc(this->lambdaForm)->arity();
	$var($LambdaForm$Name, getCombiner, $new($LambdaForm$Name, $($nc(newData)->getterFunction($nc(oldData)->fieldCount())), $$new($ObjectArray, {$of(newBaseAddress)})));
	buf->insertExpression(exprPos++, getCombiner);
	$var($TreeMap, newParameters, $new($TreeMap, static_cast<$Comparator*>($$new($LambdaFormEditor$1, this))));
	for (int32_t i = $nc(positions)->length - 1; i >= 0; --i) {
		int32_t pos = positions->get(i);
		if (!LambdaFormEditor::$assertionsDisabled && !(pos > 0 && pos <= $MethodType::MAX_JVM_ARITY && pos < $nc(this->lambdaForm)->arity$)) {
			$throwNew($AssertionError);
		}
		$var($LambdaForm$Name, newParameter, $new($LambdaForm$Name, pos, $($LambdaForm$BasicType::basicType($($cast($Class, $nc(combinerType)->parameterType(0)))))));
		$var($ObjectArray, combinerArgs, $new($ObjectArray, {
			$of(getCombiner),
			$of(newParameter)
		}));
		$var($LambdaForm$Name, callCombiner, $new($LambdaForm$Name, combinerType, combinerArgs));
		buf->insertExpression(exprPos++, callCombiner);
		newParameters->put(newParameter, $($Integer::valueOf(exprPos)));
	}
	int32_t offset = 0;
	{
		$var($Iterator, i$, $nc($(newParameters->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($LambdaForm$Name, newParameter, $cast($LambdaForm$Name, $nc(entry)->getKey()));
				int32_t from = $nc(($cast($Integer, $(entry->getValue()))))->intValue();
				buf->insertParameter($nc(newParameter)->index() + 1 + offset, newParameter);
				buf->replaceParameterByCopy($nc(newParameter)->index() + offset, from + offset);
				++offset;
			}
		}
	}
	return buf->endEdit();
}

$LambdaForm* LambdaFormEditor::makeArgumentCombinationForm(int32_t pos, $MethodType* combinerType, bool keepArguments, bool dropResult) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaFormBuffer, buf, buffer());
	$nc(buf)->startEdit();
	int32_t combinerArity = $nc(combinerType)->parameterCount();
	int32_t resultArity = (dropResult ? 0 : 1);
	if (!LambdaFormEditor::$assertionsDisabled && !(pos <= $MethodType::MAX_JVM_ARITY)) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormEditor::$assertionsDisabled && !(pos + resultArity + (keepArguments ? combinerArity : 0) <= $nc(this->lambdaForm)->arity$)) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormEditor::$assertionsDisabled && !(pos > 0)) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormEditor::$assertionsDisabled && !(combinerType == combinerType->basicType())) {
		$throwNew($AssertionError);
	}
	$init($Void);
	if (!LambdaFormEditor::$assertionsDisabled && !($cast($Class, combinerType->returnType()) != $Void::TYPE || dropResult)) {
		$throwNew($AssertionError);
	}
	$var($BoundMethodHandle$SpeciesData, oldData, oldSpeciesData());
	$init($LambdaForm$BasicType);
	$var($BoundMethodHandle$SpeciesData, newData, newSpeciesData($LambdaForm$BasicType::L_TYPE));
	$var($LambdaForm$Name, oldBaseAddress, $nc(this->lambdaForm)->parameter(0));
	$var($List, var$0, $nc(oldData)->getterFunctions());
	buf->replaceFunctions(var$0, $($nc(newData)->getterFunctions()), $$new($ObjectArray, {$of(oldBaseAddress)}));
	$var($LambdaForm$Name, newBaseAddress, $nc(oldBaseAddress)->withConstraint(newData));
	buf->renameParameter(0, newBaseAddress);
	$var($LambdaForm$Name, getCombiner, $new($LambdaForm$Name, $($nc(newData)->getterFunction($nc(oldData)->fieldCount())), $$new($ObjectArray, {$of(newBaseAddress)})));
	$var($ObjectArray, combinerArgs, $new($ObjectArray, 1 + combinerArity));
	combinerArgs->set(0, getCombiner);
	$var($LambdaForm$NameArray, newParams, nullptr);
	if (keepArguments) {
		$assign(newParams, $new($LambdaForm$NameArray, 0));
		$System::arraycopy($nc(this->lambdaForm)->names, pos + resultArity, combinerArgs, 1, combinerArity);
	} else {
		$assign(newParams, $new($LambdaForm$NameArray, combinerArity));
		for (int32_t i = 0; i < newParams->length; ++i) {
			newParams->set(i, $$new($LambdaForm$Name, pos + i, $($LambdaForm$BasicType::basicType($($cast($Class, combinerType->parameterType(i)))))));
		}
		$System::arraycopy(newParams, 0, combinerArgs, 1, combinerArity);
	}
	$var($LambdaForm$Name, callCombiner, $new($LambdaForm$Name, combinerType, combinerArgs));
	int32_t exprPos = $nc(this->lambdaForm)->arity();
	buf->insertExpression(exprPos + 0, getCombiner);
	buf->insertExpression(exprPos + 1, callCombiner);
	int32_t argPos = pos + resultArity;
	{
		$var($LambdaForm$NameArray, arr$, newParams);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LambdaForm$Name, newParam, arr$->get(i$));
			{
				buf->insertParameter(argPos++, newParam);
			}
		}
	}
	if (!LambdaFormEditor::$assertionsDisabled && !(buf->lastIndexOf(callCombiner) == exprPos + 1 + $nc(newParams)->length)) {
		$throwNew($AssertionError);
	}
	if (!dropResult) {
		buf->replaceParameterByCopy(pos, exprPos + 1 + $nc(newParams)->length);
	}
	return buf->endEdit();
}

$LambdaForm* LambdaFormEditor::makeArgumentCombinationForm(int32_t pos, $MethodType* combinerType, $ints* argPositions, bool keepArguments, bool dropResult) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaFormBuffer, buf, buffer());
	$nc(buf)->startEdit();
	int32_t combinerArity = $nc(combinerType)->parameterCount();
	if (!LambdaFormEditor::$assertionsDisabled && !(combinerArity == $nc(argPositions)->length)) {
		$throwNew($AssertionError);
	}
	int32_t resultArity = (dropResult ? 0 : 1);
	if (!LambdaFormEditor::$assertionsDisabled && !(pos <= $nc(this->lambdaForm)->arity$)) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormEditor::$assertionsDisabled && !(pos > 0)) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormEditor::$assertionsDisabled && !(combinerType == combinerType->basicType())) {
		$throwNew($AssertionError);
	}
	$init($Void);
	if (!LambdaFormEditor::$assertionsDisabled && !($cast($Class, combinerType->returnType()) != $Void::TYPE || dropResult)) {
		$throwNew($AssertionError);
	}
	$var($BoundMethodHandle$SpeciesData, oldData, oldSpeciesData());
	$init($LambdaForm$BasicType);
	$var($BoundMethodHandle$SpeciesData, newData, newSpeciesData($LambdaForm$BasicType::L_TYPE));
	$var($LambdaForm$Name, oldBaseAddress, $nc(this->lambdaForm)->parameter(0));
	$var($List, var$0, $nc(oldData)->getterFunctions());
	buf->replaceFunctions(var$0, $($nc(newData)->getterFunctions()), $$new($ObjectArray, {$of(oldBaseAddress)}));
	$var($LambdaForm$Name, newBaseAddress, $nc(oldBaseAddress)->withConstraint(newData));
	buf->renameParameter(0, newBaseAddress);
	$var($LambdaForm$Name, getCombiner, $new($LambdaForm$Name, $($nc(newData)->getterFunction($nc(oldData)->fieldCount())), $$new($ObjectArray, {$of(newBaseAddress)})));
	$var($ObjectArray, combinerArgs, $new($ObjectArray, 1 + combinerArity));
	combinerArgs->set(0, getCombiner);
	$var($LambdaForm$Name, newParam, nullptr);
	if (keepArguments) {
		for (int32_t i = 0; i < combinerArity; ++i) {
			combinerArgs->set(i + 1, $($nc(this->lambdaForm)->parameter(1 + $nc(argPositions)->get(i))));
			bool var$1 = !LambdaFormEditor::$assertionsDisabled;
			if (var$1) {
				var$1 = !($LambdaForm$BasicType::basicType($($cast($Class, combinerType->parameterType(i)))) == $nc(this->lambdaForm)->parameterType(1 + $nc(argPositions)->get(i)));
			}
			if (var$1) {
				$throwNew($AssertionError);
			}
		}
	} else {
		$assign(newParam, $new($LambdaForm$Name, pos, $($LambdaForm$BasicType::basicType($($cast($Class, combinerType->returnType()))))));
		for (int32_t i = 0; i < combinerArity; ++i) {
			int32_t argPos = 1 + $nc(argPositions)->get(i);
			if (argPos == pos) {
				combinerArgs->set(i + 1, newParam);
			} else {
				combinerArgs->set(i + 1, $($nc(this->lambdaForm)->parameter(argPos)));
			}
			bool var$2 = !LambdaFormEditor::$assertionsDisabled;
			if (var$2) {
				var$2 = !($LambdaForm$BasicType::basicType($($cast($Class, combinerType->parameterType(i)))) == $nc(this->lambdaForm)->parameterType(1 + argPositions->get(i)));
			}
			if (var$2) {
				$throwNew($AssertionError);
			}
		}
	}
	$var($LambdaForm$Name, callCombiner, $new($LambdaForm$Name, combinerType, combinerArgs));
	int32_t exprPos = $nc(this->lambdaForm)->arity();
	buf->insertExpression(exprPos + 0, getCombiner);
	buf->insertExpression(exprPos + 1, callCombiner);
	int32_t argPos = pos + resultArity;
	if (newParam != nullptr) {
		buf->insertParameter(argPos++, newParam);
		++exprPos;
	}
	if (!LambdaFormEditor::$assertionsDisabled && !(buf->lastIndexOf(callCombiner) == exprPos + 1)) {
		$throwNew($AssertionError);
	}
	if (!dropResult) {
		buf->replaceParameterByCopy(pos, exprPos + 1);
	}
	return buf->endEdit();
}

$LambdaForm* LambdaFormEditor::filterReturnForm($LambdaForm$BasicType* newType, bool constantZero) {
	$useLocalCurrentObjectStackCache();
	int8_t kind = (constantZero ? LambdaFormEditor::FILTER_RETURN_TO_ZERO : LambdaFormEditor::FILTER_RETURN);
	$var($LambdaFormEditor$TransformKey, key, $LambdaFormEditor$TransformKey::of(kind, $nc(newType)->ordinal()));
	$var($LambdaForm, form, getInCache(key));
	if (form != nullptr) {
		if (!LambdaFormEditor::$assertionsDisabled && !(form->arity$ == $nc(this->lambdaForm)->arity$)) {
			$throwNew($AssertionError);
		}
		if (!LambdaFormEditor::$assertionsDisabled && !(form->returnType() == newType)) {
			$throwNew($AssertionError);
		}
		return form;
	}
	$var($LambdaFormBuffer, buf, buffer());
	$nc(buf)->startEdit();
	int32_t insPos = $nc($nc(this->lambdaForm)->names)->length;
	$var($LambdaForm$Name, callFilter, nullptr);
	if (constantZero) {
		if (newType == $LambdaForm$BasicType::V_TYPE) {
			$assign(callFilter, nullptr);
		} else {
			$assign(callFilter, $new($LambdaForm$Name, $($LambdaForm::constantZero(newType)), $$new($ObjectArray, 0)));
		}
	} else {
		$var($BoundMethodHandle$SpeciesData, oldData, oldSpeciesData());
		$var($BoundMethodHandle$SpeciesData, newData, newSpeciesData($LambdaForm$BasicType::L_TYPE));
		$var($LambdaForm$Name, oldBaseAddress, $nc(this->lambdaForm)->parameter(0));
		$var($List, var$0, $nc(oldData)->getterFunctions());
		buf->replaceFunctions(var$0, $($nc(newData)->getterFunctions()), $$new($ObjectArray, {$of(oldBaseAddress)}));
		$var($LambdaForm$Name, newBaseAddress, $nc(oldBaseAddress)->withConstraint(newData));
		buf->renameParameter(0, newBaseAddress);
		$var($LambdaForm$Name, getFilter, $new($LambdaForm$Name, $($nc(newData)->getterFunction($nc(oldData)->fieldCount())), $$new($ObjectArray, {$of(newBaseAddress)})));
		buf->insertExpression(insPos++, getFilter);
		$LambdaForm$BasicType* oldType = $nc(this->lambdaForm)->returnType();
		if (oldType == $LambdaForm$BasicType::V_TYPE) {
			$var($MethodType, filterType, $MethodType::methodType($nc(newType)->basicTypeClass()));
			$assign(callFilter, $new($LambdaForm$Name, filterType, $$new($ObjectArray, {$of(getFilter)})));
		} else {
			$Class* var$1 = $nc(newType)->basicTypeClass();
			$var($MethodType, filterType, $MethodType::methodType(var$1, oldType->basicTypeClass()));
			$assign(callFilter, $new($LambdaForm$Name, filterType, $$new($ObjectArray, {
				$of(getFilter),
				$of($nc($nc(this->lambdaForm)->names)->get($nc(this->lambdaForm)->result))
			})));
		}
	}
	if (callFilter != nullptr) {
		buf->insertExpression(insPos++, callFilter);
	}
	buf->setResult(callFilter);
	$assign(form, buf->endEdit());
	return putInCache(key, form);
}

$LambdaForm* LambdaFormEditor::collectReturnValueForm($MethodType* combinerType) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaFormBuffer, buf, buffer());
	$nc(buf)->startEdit();
	int32_t combinerArity = $nc(combinerType)->parameterCount();
	int32_t argPos = $nc(this->lambdaForm)->arity();
	int32_t exprPos = $nc($nc(this->lambdaForm)->names)->length;
	$var($BoundMethodHandle$SpeciesData, oldData, oldSpeciesData());
	$init($LambdaForm$BasicType);
	$var($BoundMethodHandle$SpeciesData, newData, newSpeciesData($LambdaForm$BasicType::L_TYPE));
	$var($LambdaForm$Name, oldBaseAddress, $nc(this->lambdaForm)->parameter(0));
	$var($List, var$0, $nc(oldData)->getterFunctions());
	buf->replaceFunctions(var$0, $($nc(newData)->getterFunctions()), $$new($ObjectArray, {$of(oldBaseAddress)}));
	$var($LambdaForm$Name, newBaseAddress, $nc(oldBaseAddress)->withConstraint(newData));
	buf->renameParameter(0, newBaseAddress);
	$var($LambdaForm$Name, getCombiner, $new($LambdaForm$Name, $($nc(newData)->getterFunction($nc(oldData)->fieldCount())), $$new($ObjectArray, {$of(newBaseAddress)})));
	$var($ObjectArray, combinerArgs, $new($ObjectArray, combinerArity + 1));
	combinerArgs->set(0, getCombiner);
	$var($LambdaForm$NameArray, newParams, $new($LambdaForm$NameArray, combinerArity - 1));
	for (int32_t i = 0; i < newParams->length; ++i) {
		newParams->set(i, $$new($LambdaForm$Name, argPos + i, $($LambdaForm$BasicType::basicType($($cast($Class, combinerType->parameterType(i)))))));
	}
	$System::arraycopy(newParams, 0, combinerArgs, 1, combinerArity - 1);
	combinerArgs->set(combinerArity, $(buf->name($nc($nc(this->lambdaForm)->names)->length - 1)));
	$var($LambdaForm$Name, callCombiner, $new($LambdaForm$Name, combinerType, combinerArgs));
	buf->insertExpression(exprPos, getCombiner);
	buf->insertExpression(exprPos + 1, callCombiner);
	int32_t insPos = argPos;
	{
		$var($LambdaForm$NameArray, arr$, newParams);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LambdaForm$Name, newParam, arr$->get(i$));
			{
				buf->insertParameter(insPos++, newParam);
			}
		}
	}
	buf->setResult(callCombiner);
	return buf->endEdit();
}

$LambdaForm* LambdaFormEditor::foldArgumentsForm(int32_t foldPos, bool dropResult, $MethodType* combinerType) {
	$useLocalCurrentObjectStackCache();
	int32_t combinerArity = $nc(combinerType)->parameterCount();
	int8_t kind = (dropResult ? LambdaFormEditor::FOLD_ARGS_TO_VOID : LambdaFormEditor::FOLD_ARGS);
	$var($LambdaFormEditor$TransformKey, key, $LambdaFormEditor$TransformKey::of(kind, foldPos, combinerArity));
	$var($LambdaForm, form, getInCache(key));
	if (form != nullptr) {
		if (!LambdaFormEditor::$assertionsDisabled && !(form->arity$ == $nc(this->lambdaForm)->arity$ - (kind == LambdaFormEditor::FOLD_ARGS ? 1 : 0))) {
			$throwNew($AssertionError);
		}
		return form;
	}
	$assign(form, makeArgumentCombinationForm(foldPos, combinerType, true, dropResult));
	return putInCache(key, form);
}

$LambdaForm* LambdaFormEditor::foldArgumentsForm(int32_t foldPos, bool dropResult, $MethodType* combinerType, $ints* argPositions) {
	$useLocalCurrentObjectStackCache();
	int8_t kind = (dropResult ? LambdaFormEditor::FOLD_SELECT_ARGS_TO_VOID : LambdaFormEditor::FOLD_SELECT_ARGS);
	$var($LambdaFormEditor$TransformKey, key, $LambdaFormEditor$TransformKey::of(kind, foldPos, argPositions));
	$var($LambdaForm, form, getInCache(key));
	if (form != nullptr) {
		if (!LambdaFormEditor::$assertionsDisabled && !(form->arity$ == $nc(this->lambdaForm)->arity$ - (kind == LambdaFormEditor::FOLD_SELECT_ARGS ? 1 : 0))) {
			$throwNew($AssertionError);
		}
		return form;
	}
	$assign(form, makeArgumentCombinationForm(foldPos, combinerType, argPositions, true, dropResult));
	return putInCache(key, form);
}

$LambdaForm* LambdaFormEditor::filterArgumentsForm(int32_t filterPos, $MethodType* combinerType, $ints* argPositions) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaFormEditor$TransformKey, key, $LambdaFormEditor$TransformKey::of(LambdaFormEditor::FILTER_SELECT_ARGS, filterPos, argPositions));
	$var($LambdaForm, form, getInCache(key));
	if (form != nullptr) {
		if (!LambdaFormEditor::$assertionsDisabled && !(form->arity$ == $nc(this->lambdaForm)->arity$)) {
			$throwNew($AssertionError);
		}
		return form;
	}
	$assign(form, makeArgumentCombinationForm(filterPos, combinerType, argPositions, false, false));
	return putInCache(key, form);
}

$LambdaForm* LambdaFormEditor::permuteArgumentsForm(int32_t skip, $ints* reorder) {
	$useLocalCurrentObjectStackCache();
	if (!LambdaFormEditor::$assertionsDisabled && !(skip == 1)) {
		$throwNew($AssertionError);
	}
	int32_t length = $nc($nc(this->lambdaForm)->names)->length;
	int32_t outArgs = $nc(reorder)->length;
	int32_t inTypes = 0;
	bool nullPerm = true;
	for (int32_t i = 0; i < reorder->length; ++i) {
		int32_t inArg = reorder->get(i);
		if (inArg != i) {
			nullPerm = false;
		}
		inTypes = $Math::max(inTypes, inArg + 1);
	}
	if (!LambdaFormEditor::$assertionsDisabled && !(skip + reorder->length == $nc(this->lambdaForm)->arity$)) {
		$throwNew($AssertionError);
	}
	if (nullPerm) {
		return this->lambdaForm;
	}
	$var($LambdaFormEditor$TransformKey, key, $LambdaFormEditor$TransformKey::of(LambdaFormEditor::PERMUTE_ARGS, reorder));
	$var($LambdaForm, form, getInCache(key));
	if (form != nullptr) {
		if (!LambdaFormEditor::$assertionsDisabled && !(form->arity$ == skip + inTypes)) {
			$throwNew($AssertionError, $of(form));
		}
		return form;
	}
	$var($LambdaForm$BasicTypeArray, types, $new($LambdaForm$BasicTypeArray, inTypes));
	for (int32_t i = 0; i < outArgs; ++i) {
		int32_t inArg = reorder->get(i);
		types->set(inArg, $nc($nc($nc(this->lambdaForm)->names)->get(skip + i))->type$);
	}
	if (!LambdaFormEditor::$assertionsDisabled && !(skip + outArgs == $nc(this->lambdaForm)->arity$)) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormEditor::$assertionsDisabled && !(permutedTypesMatch(reorder, types, $nc(this->lambdaForm)->names, skip))) {
		$throwNew($AssertionError);
	}
	int32_t pos = 0;
	while (pos < outArgs && reorder->get(pos) == pos) {
		pos += 1;
	}
	$var($LambdaForm$NameArray, names2, $new($LambdaForm$NameArray, length - outArgs + inTypes));
	$System::arraycopy($nc(this->lambdaForm)->names, 0, names2, 0, skip + pos);
	int32_t bodyLength = length - $nc(this->lambdaForm)->arity$;
	$System::arraycopy($nc(this->lambdaForm)->names, skip + outArgs, names2, skip + inTypes, bodyLength);
	int32_t arity2 = names2->length - bodyLength;
	int32_t result2 = $nc(this->lambdaForm)->result;
	if (result2 >= skip) {
		if (result2 < skip + outArgs) {
			result2 = reorder->get(result2 - skip) + skip;
		} else {
			result2 = result2 - outArgs + inTypes;
		}
	}
	for (int32_t j = pos; j < outArgs; ++j) {
		$var($LambdaForm$Name, n, $nc($nc(this->lambdaForm)->names)->get(skip + j));
		int32_t i = reorder->get(j);
		$var($LambdaForm$Name, n2, names2->get(skip + i));
		if (n2 == nullptr) {
			names2->set(skip + i, $assign(n2, $new($LambdaForm$Name, types->get(i))));
		} else if (!LambdaFormEditor::$assertionsDisabled && !($nc(n2)->type$ == types->get(i))) {
			$throwNew($AssertionError);
		}
		for (int32_t k = arity2; k < names2->length; ++k) {
			names2->set(k, $($nc(names2->get(k))->replaceName(n, n2)));
		}
	}
	for (int32_t i = skip + pos; i < arity2; ++i) {
		if (names2->get(i) == nullptr) {
			names2->set(i, $($LambdaForm::argument(i, types->get(i - skip))));
		}
	}
	for (int32_t j = $nc(this->lambdaForm)->arity$; j < $nc($nc(this->lambdaForm)->names)->length; ++j) {
		int32_t i = j - $nc(this->lambdaForm)->arity$ + arity2;
		$var($LambdaForm$Name, n, $nc($nc(this->lambdaForm)->names)->get(j));
		$var($LambdaForm$Name, n2, names2->get(i));
		if (n != n2) {
			for (int32_t k = i + 1; k < names2->length; ++k) {
				names2->set(k, $($nc(names2->get(k))->replaceName(n, n2)));
			}
		}
	}
	$assign(form, $new($LambdaForm, arity2, names2, result2));
	return putInCache(key, form);
}

$LambdaForm* LambdaFormEditor::noteLoopLocalTypesForm(int32_t pos, $LambdaForm$BasicTypeArray* localTypes) {
	$useLocalCurrentObjectStackCache();
	if (!LambdaFormEditor::$assertionsDisabled && !($nc(this->lambdaForm)->isLoop(pos))) {
		$throwNew($AssertionError);
	}
	$var($ints, desc, $LambdaForm$BasicType::basicTypeOrds(localTypes));
	$assign(desc, $Arrays::copyOf(desc, $nc(desc)->length + 1));
	desc->set(desc->length - 1, pos);
	$var($LambdaFormEditor$TransformKey, key, $LambdaFormEditor$TransformKey::of(LambdaFormEditor::LOCAL_TYPES, desc));
	$var($LambdaForm, form, getInCache(key));
	if (form != nullptr) {
		return form;
	}
	$var($LambdaForm$Name, invokeLoop, $nc($nc(this->lambdaForm)->names)->get(pos + 1));
	if (!LambdaFormEditor::$assertionsDisabled && !($nc($nc(invokeLoop)->function)->equals($($MethodHandleImpl::getFunction((int8_t)4))))) {
		$throwNew($AssertionError);
	}
	$var($ObjectArray, args, $Arrays::copyOf($nc(invokeLoop)->arguments, $nc(invokeLoop->arguments)->length));
	if (!LambdaFormEditor::$assertionsDisabled && !(args->get(0) == nullptr)) {
		$throwNew($AssertionError);
	}
	args->set(0, localTypes);
	$var($LambdaFormBuffer, buf, buffer());
	$nc(buf)->startEdit();
	buf->changeName(pos + 1, $$new($LambdaForm$Name, $($MethodHandleImpl::getFunction((int8_t)4)), args));
	$assign(form, buf->endEdit());
	return putInCache(key, form);
}

bool LambdaFormEditor::permutedTypesMatch($ints* reorder, $LambdaForm$BasicTypeArray* types, $LambdaForm$NameArray* names, int32_t skip) {
	$init(LambdaFormEditor);
	for (int32_t i = 0; i < $nc(reorder)->length; ++i) {
		if (!LambdaFormEditor::$assertionsDisabled && !($nc($nc(names)->get(skip + i))->isParam())) {
			$throwNew($AssertionError);
		}
		if (!LambdaFormEditor::$assertionsDisabled && !($nc($nc(names)->get(skip + i))->type$ == $nc(types)->get(reorder->get(i)))) {
			$throwNew($AssertionError);
		}
	}
	return true;
}

void clinit$LambdaFormEditor($Class* class$) {
	LambdaFormEditor::$assertionsDisabled = !LambdaFormEditor::class$->desiredAssertionStatus();
}

LambdaFormEditor::LambdaFormEditor() {
}

$Class* LambdaFormEditor::load$($String* name, bool initialize) {
	$loadClass(LambdaFormEditor, name, initialize, &_LambdaFormEditor_ClassInfo_, clinit$LambdaFormEditor, allocate$LambdaFormEditor);
	return class$;
}

$Class* LambdaFormEditor::class$ = nullptr;

		} // invoke
	} // lang
} // java