/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <java/lang/interpreter/ByteCodeObject.h>

#include <java/lang/reflect/Method.h>
#include <java/lang/interpreter/ByteCodeClass.h>
#include <java/util/HashMap.h>
#include <jcpp.h>
#include <inttypes.h>

#include "Platform.h"

using namespace ::java::lang::reflect;

namespace java {
	namespace lang {
		namespace interpreter {

ByteCodeObject::ByteCodeObject() {
}

#ifdef USE_TO_OBJECT0
::java::lang::Object0* ByteCodeObject::toObject0$() const {
	VfptrInfo* vfptrInfo = getVfptrInfo(this);
	if (vfptrInfo->offset == 0) {
		return (::java::lang::Object0*)(void*)this;
	}
	int8_t* address = (int8_t*)this;
	address -= vfptrInfo->offset;
	return (::java::lang::Object0*)(void*)address;
}
#endif

void ByteCodeObject::initVfptrInfo(VfptrInfo* vfptrInfo) {
	int32_t vftTableSize = vfptrInfo->forwardMethods->length;
#ifdef USE_DESTRUCTOR // virtual ~Object()
	vftTableSize++;
	#if defined(__clang__) || defined(__GNUC__)
	// the-deleting-destructor-occupy-a-second-vtable-slot
	vftTableSize++;
	#endif
#endif
#ifdef USE_TO_OBJECT0
	vftTableSize++;
#endif
	$var($longs, vfTabArray, $new<$longs>(vftTableSize));

	void** vfTabs = (void**)vfTabArray->begin();
	int32_t vfTabIndex = 0;
	ByteCodeObject bcObj;
#ifdef USE_DESTRUCTOR
	vfTabs[vfTabIndex] = Platform::getVirtualInvokeAddress(&bcObj, 0, vfTabIndex);
	vfTabIndex++;
	#if defined(__clang__) || defined(__GNUC__)
	// the-deleting-destructor-occupy-a-second-vtable-slot
	vfTabs[vfTabIndex] = Platform::getVirtualInvokeAddress(&bcObj, 0, vfTabIndex);
	vfTabIndex++;
	#endif
#endif
#ifdef USE_TO_OBJECT0
	vfTabs[vfTabIndex] = Platform::getVirtualInvokeAddress(&bcObj, 0, vfTabIndex);
	vfTabIndex++;
#endif
	for (int32_t j = 0; j < vfptrInfo->forwardMethods->length; j++) {
		$var(Method, method, vfptrInfo->forwardMethods->get(j));
		if (!method->override$) {
			method->override$ = true;
		}
		int32_t index = 0;
		//if (method->name->equals("copyWithExtendL")) {
		//	this->toString();
		//}
	//	$var(ByteArray, ba, method->name->c_utf8());
	//	printf("%s\n", ba->begin());
//		if (method->name->equals("getClass") && method->parameterTypes->length == 0) {
//			index = Object::PRE_OBJECT_VIRTUAL_METHOD_COUNT + j;
//			void* vf = getVF(index);
//			vfptrInfo->vfTab->set(vfTabIndex, (int64_t)vf);
//			vfTabIndex++;
//			continue;
//		} else 
		// forward to sub class directly
		if (method->clazz != vfptrInfo->clazz && !method->clazz->isInterface()) {
			if (method->invokeAddress == nullptr) {
				Platform::setVirtualInvokeAddress(method);
			}
		//	vfptrInfo->vfTab->set(vfTabIndex, (int64_t)method->invokeAddress);
			vfTabs[vfTabIndex] = method->invokeAddress;
			vfTabIndex++;
			continue;
			/*
			$var(Object, instance0, method->clazz->allocateInstance());
			void*** pVtabByteCode0 = (void***)instance0;
			$var($Array<Method>, methods0, method->clazz->getVirtualMethods());
			for (int32_t methodIndex = 0; methodIndex < methods0->length; methodIndex++) {
				$var(Method, method0, methods0->get(methodIndex));
				if (VfptrInfo::methodEquals(method, method0)) {
					index = Object::PRE_OBJECT_VIRTUAL_METHOD_COUNT + methodIndex;
					void* vf = pVtabByteCode0[0][index];
					vfptrInfo->vfTab->set(vfTabIndex, (int64_t)vf);
					vfTabIndex++;
					break;
				}
			}
			continue;
			*/
		//}
		//if (method->name->equals("getClass") && method->parameterTypes->length == 0) {
		//	index = Object::PRE_OBJECT_VIRTUAL_METHOD_COUNT + j;
		//}
		//else if (method->name->equals("finalize") && method->parameterTypes->length == 0) {
		//	if (overridedFinalize) {
		//		int32_t offset0 = this->getBaseClassOffset(method->clazz);
		//		vfptrInfo->forwardMethodOffsets->set(j, offset0);
		//		int32_t vfptrIndex = ByteCodeObject::getVFPTRIndex(j, method);
		//		index = Object::PRE_OBJECT_VIRTUAL_METHOD_COUNT + Object::OBJECT_VIRTUAL_METHOD_COUNT + vfptrIndex;
		//	} else {
		//		index = Object::PRE_OBJECT_VIRTUAL_METHOD_COUNT + j;
		//	}
		} else {
			int32_t offset0 = vfptrInfo->clazz->getBaseClassOffset(method->clazz);
		//	vfptrInfo->forwardMethodOffsets->set(j, offset0);
		///	void* forwardCode = genForwardCode(j, offset0, method);
			if (offset0 > 0) {
				offset0 = offset0;
			}
			void* forwardCode = Platform::prepareClosure(offset0, method);
			//	vfptrInfo->vfTab->set(vfTabIndex, (int64_t)forwardCode);
			vfTabs[vfTabIndex] = forwardCode;
			vfTabIndex++;
		}
	}
	$set(vfptrInfo, vfTableData, Platform::makeVirtualFunctionTable(vfptrInfo->offset, vfTabIndex, vfTabs, vfptrInfo));
}


inline VfptrInfo* ByteCodeObject::getVfptrInfo(const void* address) {
//	void*** vfTab = (void***)address;
//	VfptrInfo* vfptrInfo = (VfptrInfo*)(*vfTab)[-1];
	VfptrInfo* vfptrInfo = (VfptrInfo*)Platform::getOpt(address);
	return vfptrInfo;
}

		} // interpreter
	} // lang
} // java