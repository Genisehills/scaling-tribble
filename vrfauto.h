

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __vrfauto_h__
#define __vrfauto_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAppVerifierManager_FWD_DEFINED__
#define __IAppVerifierManager_FWD_DEFINED__
typedef interface IAppVerifierManager IAppVerifierManager;

#endif 	/* __IAppVerifierManager_FWD_DEFINED__ */


#ifndef __IAppVerifierImages_FWD_DEFINED__
#define __IAppVerifierImages_FWD_DEFINED__
typedef interface IAppVerifierImages IAppVerifierImages;

#endif 	/* __IAppVerifierImages_FWD_DEFINED__ */


#ifndef __IAppVerifierImage_FWD_DEFINED__
#define __IAppVerifierImage_FWD_DEFINED__
typedef interface IAppVerifierImage IAppVerifierImage;

#endif 	/* __IAppVerifierImage_FWD_DEFINED__ */


#ifndef __IAppVerifierImageLog_FWD_DEFINED__
#define __IAppVerifierImageLog_FWD_DEFINED__
typedef interface IAppVerifierImageLog IAppVerifierImageLog;

#endif 	/* __IAppVerifierImageLog_FWD_DEFINED__ */


#ifndef __IAppVerifierImageLogs_FWD_DEFINED__
#define __IAppVerifierImageLogs_FWD_DEFINED__
typedef interface IAppVerifierImageLogs IAppVerifierImageLogs;

#endif 	/* __IAppVerifierImageLogs_FWD_DEFINED__ */


#ifndef __IAppVerifierChecks_FWD_DEFINED__
#define __IAppVerifierChecks_FWD_DEFINED__
typedef interface IAppVerifierChecks IAppVerifierChecks;

#endif 	/* __IAppVerifierChecks_FWD_DEFINED__ */


#ifndef __IAppVerifierCheck_FWD_DEFINED__
#define __IAppVerifierCheck_FWD_DEFINED__
typedef interface IAppVerifierCheck IAppVerifierCheck;

#endif 	/* __IAppVerifierCheck_FWD_DEFINED__ */


#ifndef __IAppVerifierProperties_FWD_DEFINED__
#define __IAppVerifierProperties_FWD_DEFINED__
typedef interface IAppVerifierProperties IAppVerifierProperties;

#endif 	/* __IAppVerifierProperties_FWD_DEFINED__ */


#ifndef __IAppVerifierProperty_FWD_DEFINED__
#define __IAppVerifierProperty_FWD_DEFINED__
typedef interface IAppVerifierProperty IAppVerifierProperty;

#endif 	/* __IAppVerifierProperty_FWD_DEFINED__ */


#ifndef __IAppVerifierStops_FWD_DEFINED__
#define __IAppVerifierStops_FWD_DEFINED__
typedef interface IAppVerifierStops IAppVerifierStops;

#endif 	/* __IAppVerifierStops_FWD_DEFINED__ */


#ifndef __IAppVerifierStop_FWD_DEFINED__
#define __IAppVerifierStop_FWD_DEFINED__
typedef interface IAppVerifierStop IAppVerifierStop;

#endif 	/* __IAppVerifierStop_FWD_DEFINED__ */


#ifndef __IAppVerifierImageChecks_FWD_DEFINED__
#define __IAppVerifierImageChecks_FWD_DEFINED__
typedef interface IAppVerifierImageChecks IAppVerifierImageChecks;

#endif 	/* __IAppVerifierImageChecks_FWD_DEFINED__ */


#ifndef __IAppVerifierImageCheck_FWD_DEFINED__
#define __IAppVerifierImageCheck_FWD_DEFINED__
typedef interface IAppVerifierImageCheck IAppVerifierImageCheck;

#endif 	/* __IAppVerifierImageCheck_FWD_DEFINED__ */


#ifndef __IAppVerifierImageProperties_FWD_DEFINED__
#define __IAppVerifierImageProperties_FWD_DEFINED__
typedef interface IAppVerifierImageProperties IAppVerifierImageProperties;

#endif 	/* __IAppVerifierImageProperties_FWD_DEFINED__ */


#ifndef __IAppVerifierImageProperty_FWD_DEFINED__
#define __IAppVerifierImageProperty_FWD_DEFINED__
typedef interface IAppVerifierImageProperty IAppVerifierImageProperty;

#endif 	/* __IAppVerifierImageProperty_FWD_DEFINED__ */


#ifndef __IAppVerifierImageStops_FWD_DEFINED__
#define __IAppVerifierImageStops_FWD_DEFINED__
typedef interface IAppVerifierImageStops IAppVerifierImageStops;

#endif 	/* __IAppVerifierImageStops_FWD_DEFINED__ */


#ifndef __IAppVerifierImageStop_FWD_DEFINED__
#define __IAppVerifierImageStop_FWD_DEFINED__
typedef interface IAppVerifierImageStop IAppVerifierImageStop;

#endif 	/* __IAppVerifierImageStop_FWD_DEFINED__ */


#ifndef __AppVerifierManager_FWD_DEFINED__
#define __AppVerifierManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class AppVerifierManager AppVerifierManager;
#else
typedef struct AppVerifierManager AppVerifierManager;
#endif /* __cplusplus */

#endif 	/* __AppVerifierManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vrfauto_0000_0000 */
/* [local] */ 




















extern RPC_IF_HANDLE __MIDL_itf_vrfauto_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vrfauto_0000_0000_v0_0_s_ifspec;


#ifndef __APPVERIFIER_LIBRARY_DEFINED__
#define __APPVERIFIER_LIBRARY_DEFINED__

/* library APPVERIFIER */
/* [helpstring][version][uuid] */ 

typedef /* [helpstring][uuid][public] */  DECLSPEC_UUID("b17d1b51-f5b4-4a5b-aeb0-17e6b4b84f65") 
enum VerifierStopSeverity
    {
        VerifierStopSeverityIgnore	= 0,
        VerifierStopSeverityInformation	= 1,
        VerifierStopSeverityWarning	= 2,
        VerifierStopSeverityError	= 3
    } 	VerifierStopSeverity;

typedef /* [helpstring][uuid][public] */  DECLSPEC_UUID("0a0fbc2f-8dee-4f8e-b3e1-6838989fb408") 
enum VerifierErrorReporting
    {
        VerifierErrorReportingNoBreak	= 0,
        VerifierErrorReportingException	= 1,
        VerifierErrorReportingBreakpoint	= 2
    } 	VerifierErrorReporting;

typedef /* [helpstring][uuid][public] */  DECLSPEC_UUID("de9d346c-ce91-4695-84b8-66d4ef336258") 
enum VerifierErrorFlag
    {
        VerifierErrorFlagLogToFile	= 0x1,
        VerifierErrorFlagLogStackTrace	= 0x2
    } 	VerifierErrorFlag;

typedef /* [helpstring][uuid][public] */  DECLSPEC_UUID("0512b3f5-59f8-4d42-a997-93951b0b7e1f") 
enum VerifierStopFlag
    {
        VerifierStopFlagStopOnce	= 0x1,
        VerifierStopFlagNotContinuable	= 0x2
    } 	VerifierStopFlag;

typedef /* [helpstring][uuid][public] */  DECLSPEC_UUID("fd5c2b74-01ef-4d17-a8a9-3d76d245a863") 
enum VerifierPropertyType
    {
        VerifierPropertyTypeNone	= 0,
        VerifierPropertyTypeDWORD	= 1,
        VerifierPropertyTypeQWORD	= 2,
        VerifierPropertyTypeString	= 3,
        VerifierPropertyTypeStringArray	= 4,
        VerifierPropertyTypeByteArray	= 5,
        VerifierPropertyTypeBoolean	= 6
    } 	VerifierPropertyType;


EXTERN_C const IID LIBID_APPVERIFIER;

#ifndef __IAppVerifierManager_INTERFACE_DEFINED__
#define __IAppVerifierManager_INTERFACE_DEFINED__

/* interface IAppVerifierManager */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6b0532d9-ee3c-4865-8c1a-8e4e9fcaa7fc")
    IAppVerifierManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MajorVersion( 
            /* [retval][out] */ LONG *plMajorVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinorVersion( 
            /* [retval][out] */ LONG *plMinorVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BuildVersion( 
            /* [retval][out] */ LONG *plBuildVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PrivateVersion( 
            /* [retval][out] */ LONG *plPrivateVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Images( 
            /* [retval][out] */ IAppVerifierImages **ppImages) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Checks( 
            /* [retval][out] */ IAppVerifierChecks **ppChecks) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Logs( 
            /* [in] */ BSTR Image,
            /* [retval][out] */ IAppVerifierImageLogs **ppLogs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierManager * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )( 
            IAppVerifierManager * This,
            /* [retval][out] */ LONG *plMajorVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )( 
            IAppVerifierManager * This,
            /* [retval][out] */ LONG *plMinorVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuildVersion )( 
            IAppVerifierManager * This,
            /* [retval][out] */ LONG *plBuildVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrivateVersion )( 
            IAppVerifierManager * This,
            /* [retval][out] */ LONG *plPrivateVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Images )( 
            IAppVerifierManager * This,
            /* [retval][out] */ IAppVerifierImages **ppImages);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Checks )( 
            IAppVerifierManager * This,
            /* [retval][out] */ IAppVerifierChecks **ppChecks);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Logs )( 
            IAppVerifierManager * This,
            /* [in] */ BSTR Image,
            /* [retval][out] */ IAppVerifierImageLogs **ppLogs);
        
        END_INTERFACE
    } IAppVerifierManagerVtbl;

    interface IAppVerifierManager
    {
        CONST_VTBL struct IAppVerifierManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierManager_get_MajorVersion(This,plMajorVersion)	\
    ( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) ) 

#define IAppVerifierManager_get_MinorVersion(This,plMinorVersion)	\
    ( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) ) 

#define IAppVerifierManager_get_BuildVersion(This,plBuildVersion)	\
    ( (This)->lpVtbl -> get_BuildVersion(This,plBuildVersion) ) 

#define IAppVerifierManager_get_PrivateVersion(This,plPrivateVersion)	\
    ( (This)->lpVtbl -> get_PrivateVersion(This,plPrivateVersion) ) 

#define IAppVerifierManager_get_Images(This,ppImages)	\
    ( (This)->lpVtbl -> get_Images(This,ppImages) ) 

#define IAppVerifierManager_get_Checks(This,ppChecks)	\
    ( (This)->lpVtbl -> get_Checks(This,ppChecks) ) 

#define IAppVerifierManager_get_Logs(This,Image,ppLogs)	\
    ( (This)->lpVtbl -> get_Logs(This,Image,ppLogs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierManager_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierImages_INTERFACE_DEFINED__
#define __IAppVerifierImages_INTERFACE_DEFINED__

/* interface IAppVerifierImages */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierImages;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2c7b03cc-81d5-4ba3-b7aa-db662a49f61a")
    IAppVerifierImages : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *ppunk) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR bstrImageName,
            /* [retval][out] */ IAppVerifierImage **ppImage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR bstrImageName,
            /* [retval][out] */ IAppVerifierImage **ppImage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ BSTR bstrImageName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierImagesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierImages * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierImages * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierImages * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierImages * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierImages * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierImages * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierImages * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAppVerifierImages * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][hidden][restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAppVerifierImages * This,
            /* [retval][out] */ LPUNKNOWN *ppunk);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAppVerifierImages * This,
            /* [in] */ BSTR bstrImageName,
            /* [retval][out] */ IAppVerifierImage **ppImage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IAppVerifierImages * This,
            /* [in] */ BSTR bstrImageName,
            /* [retval][out] */ IAppVerifierImage **ppImage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAppVerifierImages * This,
            /* [in] */ BSTR bstrImageName);
        
        END_INTERFACE
    } IAppVerifierImagesVtbl;

    interface IAppVerifierImages
    {
        CONST_VTBL struct IAppVerifierImagesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierImages_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierImages_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierImages_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierImages_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierImages_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierImages_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierImages_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierImages_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IAppVerifierImages_get__NewEnum(This,ppunk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) ) 

#define IAppVerifierImages_get_Item(This,bstrImageName,ppImage)	\
    ( (This)->lpVtbl -> get_Item(This,bstrImageName,ppImage) ) 

#define IAppVerifierImages_Add(This,bstrImageName,ppImage)	\
    ( (This)->lpVtbl -> Add(This,bstrImageName,ppImage) ) 

#define IAppVerifierImages_Remove(This,bstrImageName)	\
    ( (This)->lpVtbl -> Remove(This,bstrImageName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierImages_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierImage_INTERFACE_DEFINED__
#define __IAppVerifierImage_INTERFACE_DEFINED__

/* interface IAppVerifierImage */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4718cb93-a4b3-4f0d-9b90-35e69e29968e")
    IAppVerifierImage : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Checks( 
            /* [retval][out] */ IAppVerifierImageChecks **ppChecks) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierImageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierImage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierImage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierImage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierImage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierImage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierImage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierImage * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAppVerifierImage * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Checks )( 
            IAppVerifierImage * This,
            /* [retval][out] */ IAppVerifierImageChecks **ppChecks);
        
        END_INTERFACE
    } IAppVerifierImageVtbl;

    interface IAppVerifierImage
    {
        CONST_VTBL struct IAppVerifierImageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierImage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierImage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierImage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierImage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierImage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierImage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierImage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierImage_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IAppVerifierImage_get_Checks(This,ppChecks)	\
    ( (This)->lpVtbl -> get_Checks(This,ppChecks) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierImage_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierImageLog_INTERFACE_DEFINED__
#define __IAppVerifierImageLog_INTERFACE_DEFINED__

/* interface IAppVerifierImageLog */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierImageLog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("653dbf1c-3ae1-46fa-a8c8-fab3b3b62699")
    IAppVerifierImageLog : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAsXML( 
            /* [in] */ BSTR bstrLogPath,
            /* [in] */ BSTR bstrSympath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierImageLogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierImageLog * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierImageLog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierImageLog * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierImageLog * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierImageLog * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierImageLog * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierImageLog * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAppVerifierImageLog * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAsXML )( 
            IAppVerifierImageLog * This,
            /* [in] */ BSTR bstrLogPath,
            /* [in] */ BSTR bstrSympath);
        
        END_INTERFACE
    } IAppVerifierImageLogVtbl;

    interface IAppVerifierImageLog
    {
        CONST_VTBL struct IAppVerifierImageLogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierImageLog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierImageLog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierImageLog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierImageLog_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierImageLog_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierImageLog_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierImageLog_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierImageLog_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IAppVerifierImageLog_SaveAsXML(This,bstrLogPath,bstrSympath)	\
    ( (This)->lpVtbl -> SaveAsXML(This,bstrLogPath,bstrSympath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierImageLog_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierImageLogs_INTERFACE_DEFINED__
#define __IAppVerifierImageLogs_INTERFACE_DEFINED__

/* interface IAppVerifierImageLogs */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierImageLogs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("31861193-4a66-4d41-a796-05185b0207f4")
    IAppVerifierImageLogs : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *ppunk) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long lLogIndex,
            /* [retval][out] */ IAppVerifierImageLog **ppLog) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long lLogIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierImageLogsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierImageLogs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierImageLogs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierImageLogs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierImageLogs * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierImageLogs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierImageLogs * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierImageLogs * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAppVerifierImageLogs * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][hidden][restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAppVerifierImageLogs * This,
            /* [retval][out] */ LPUNKNOWN *ppunk);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAppVerifierImageLogs * This,
            /* [in] */ long lLogIndex,
            /* [retval][out] */ IAppVerifierImageLog **ppLog);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAppVerifierImageLogs * This,
            /* [in] */ long lLogIndex);
        
        END_INTERFACE
    } IAppVerifierImageLogsVtbl;

    interface IAppVerifierImageLogs
    {
        CONST_VTBL struct IAppVerifierImageLogsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierImageLogs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierImageLogs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierImageLogs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierImageLogs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierImageLogs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierImageLogs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierImageLogs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierImageLogs_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IAppVerifierImageLogs_get__NewEnum(This,ppunk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) ) 

#define IAppVerifierImageLogs_get_Item(This,lLogIndex,ppLog)	\
    ( (This)->lpVtbl -> get_Item(This,lLogIndex,ppLog) ) 

#define IAppVerifierImageLogs_Remove(This,lLogIndex)	\
    ( (This)->lpVtbl -> Remove(This,lLogIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierImageLogs_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierChecks_INTERFACE_DEFINED__
#define __IAppVerifierChecks_INTERFACE_DEFINED__

/* interface IAppVerifierChecks */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierChecks;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3163843f-4f41-4f5a-9d28-e332be3c31bc")
    IAppVerifierChecks : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *ppunk) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR bstrCheckId,
            /* [retval][out] */ IAppVerifierCheck **ppCheck) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierChecksVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierChecks * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierChecks * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierChecks * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierChecks * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierChecks * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierChecks * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierChecks * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAppVerifierChecks * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][hidden][restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAppVerifierChecks * This,
            /* [retval][out] */ LPUNKNOWN *ppunk);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAppVerifierChecks * This,
            /* [in] */ BSTR bstrCheckId,
            /* [retval][out] */ IAppVerifierCheck **ppCheck);
        
        END_INTERFACE
    } IAppVerifierChecksVtbl;

    interface IAppVerifierChecks
    {
        CONST_VTBL struct IAppVerifierChecksVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierChecks_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierChecks_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierChecks_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierChecks_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierChecks_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierChecks_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierChecks_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierChecks_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IAppVerifierChecks_get__NewEnum(This,ppunk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) ) 

#define IAppVerifierChecks_get_Item(This,bstrCheckId,ppCheck)	\
    ( (This)->lpVtbl -> get_Item(This,bstrCheckId,ppCheck) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierChecks_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierCheck_INTERFACE_DEFINED__
#define __IAppVerifierCheck_INTERFACE_DEFINED__

/* interface IAppVerifierCheck */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierCheck;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b07f8bb4-7a0a-4de9-8421-5bf07f9c44c6")
    IAppVerifierCheck : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MajorVersion( 
            /* [retval][out] */ LONG *plMajorVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinorVersion( 
            /* [retval][out] */ LONG *plMinorVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GuidString( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GroupName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LongName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Properties( 
            /* [retval][out] */ IAppVerifierProperties **ppProperties) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Stops( 
            /* [retval][out] */ IAppVerifierStops **ppStops) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Propigate( 
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierCheckVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierCheck * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierCheck * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierCheck * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierCheck * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierCheck * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierCheck * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierCheck * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAppVerifierCheck * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )( 
            IAppVerifierCheck * This,
            /* [retval][out] */ LONG *plMajorVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )( 
            IAppVerifierCheck * This,
            /* [retval][out] */ LONG *plMinorVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GuidString )( 
            IAppVerifierCheck * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GroupName )( 
            IAppVerifierCheck * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IAppVerifierCheck * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LongName )( 
            IAppVerifierCheck * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Properties )( 
            IAppVerifierCheck * This,
            /* [retval][out] */ IAppVerifierProperties **ppProperties);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stops )( 
            IAppVerifierCheck * This,
            /* [retval][out] */ IAppVerifierStops **ppStops);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Propigate )( 
            IAppVerifierCheck * This,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        END_INTERFACE
    } IAppVerifierCheckVtbl;

    interface IAppVerifierCheck
    {
        CONST_VTBL struct IAppVerifierCheckVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierCheck_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierCheck_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierCheck_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierCheck_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierCheck_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierCheck_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierCheck_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierCheck_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IAppVerifierCheck_get_MajorVersion(This,plMajorVersion)	\
    ( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) ) 

#define IAppVerifierCheck_get_MinorVersion(This,plMinorVersion)	\
    ( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) ) 

#define IAppVerifierCheck_get_GuidString(This,pbstr)	\
    ( (This)->lpVtbl -> get_GuidString(This,pbstr) ) 

#define IAppVerifierCheck_get_GroupName(This,pbstr)	\
    ( (This)->lpVtbl -> get_GroupName(This,pbstr) ) 

#define IAppVerifierCheck_get_Description(This,pbstr)	\
    ( (This)->lpVtbl -> get_Description(This,pbstr) ) 

#define IAppVerifierCheck_get_LongName(This,pbstr)	\
    ( (This)->lpVtbl -> get_LongName(This,pbstr) ) 

#define IAppVerifierCheck_get_Properties(This,ppProperties)	\
    ( (This)->lpVtbl -> get_Properties(This,ppProperties) ) 

#define IAppVerifierCheck_get_Stops(This,ppStops)	\
    ( (This)->lpVtbl -> get_Stops(This,ppStops) ) 

#define IAppVerifierCheck_get_Propigate(This,pbResult)	\
    ( (This)->lpVtbl -> get_Propigate(This,pbResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierCheck_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierProperties_INTERFACE_DEFINED__
#define __IAppVerifierProperties_INTERFACE_DEFINED__

/* interface IAppVerifierProperties */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3a4ee78b-0c75-45d0-9ebd-dcc50c6d2437")
    IAppVerifierProperties : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *ppunk) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR bstrProperty,
            /* [retval][out] */ IAppVerifierProperty **ppProperty) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierProperties * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierProperties * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierProperties * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierProperties * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierProperties * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAppVerifierProperties * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][hidden][restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAppVerifierProperties * This,
            /* [retval][out] */ LPUNKNOWN *ppunk);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAppVerifierProperties * This,
            /* [in] */ BSTR bstrProperty,
            /* [retval][out] */ IAppVerifierProperty **ppProperty);
        
        END_INTERFACE
    } IAppVerifierPropertiesVtbl;

    interface IAppVerifierProperties
    {
        CONST_VTBL struct IAppVerifierPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierProperties_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierProperties_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierProperties_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierProperties_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierProperties_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IAppVerifierProperties_get__NewEnum(This,ppunk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) ) 

#define IAppVerifierProperties_get_Item(This,bstrProperty,ppProperty)	\
    ( (This)->lpVtbl -> get_Item(This,bstrProperty,ppProperty) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierProperties_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierProperty_INTERFACE_DEFINED__
#define __IAppVerifierProperty_INTERFACE_DEFINED__

/* interface IAppVerifierProperty */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12dae0bd-d323-4639-9d54-0ee125be37e5")
    IAppVerifierProperty : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ VerifierPropertyType *pVerifierPropertyType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT *pvValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierProperty * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierProperty * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAppVerifierProperty * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAppVerifierProperty * This,
            /* [retval][out] */ VerifierPropertyType *pVerifierPropertyType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IAppVerifierProperty * This,
            /* [retval][out] */ VARIANT *pvValue);
        
        END_INTERFACE
    } IAppVerifierPropertyVtbl;

    interface IAppVerifierProperty
    {
        CONST_VTBL struct IAppVerifierPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierProperty_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IAppVerifierProperty_get_Type(This,pVerifierPropertyType)	\
    ( (This)->lpVtbl -> get_Type(This,pVerifierPropertyType) ) 

#define IAppVerifierProperty_get_Value(This,pvValue)	\
    ( (This)->lpVtbl -> get_Value(This,pvValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierProperty_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierStops_INTERFACE_DEFINED__
#define __IAppVerifierStops_INTERFACE_DEFINED__

/* interface IAppVerifierStops */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierStops;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41f670dd-83ed-46ff-bbc0-3d8f973e57dd")
    IAppVerifierStops : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *ppunk) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG lStopCode,
            /* [retval][out] */ IAppVerifierStop **ppStop) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierStopsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierStops * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierStops * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierStops * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierStops * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierStops * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierStops * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierStops * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAppVerifierStops * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][hidden][restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAppVerifierStops * This,
            /* [retval][out] */ LPUNKNOWN *ppunk);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAppVerifierStops * This,
            /* [in] */ LONG lStopCode,
            /* [retval][out] */ IAppVerifierStop **ppStop);
        
        END_INTERFACE
    } IAppVerifierStopsVtbl;

    interface IAppVerifierStops
    {
        CONST_VTBL struct IAppVerifierStopsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierStops_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierStops_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierStops_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierStops_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierStops_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierStops_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierStops_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierStops_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IAppVerifierStops_get__NewEnum(This,ppunk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) ) 

#define IAppVerifierStops_get_Item(This,lStopCode,ppStop)	\
    ( (This)->lpVtbl -> get_Item(This,lStopCode,ppStop) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierStops_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierStop_INTERFACE_DEFINED__
#define __IAppVerifierStop_INTERFACE_DEFINED__

/* interface IAppVerifierStop */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierStop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("340c8535-ed7e-4bec-b67a-d300dcba13dc")
    IAppVerifierStop : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StopCode( 
            /* [retval][out] */ LONG *plStopCode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Active( 
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Severity( 
            /* [retval][out] */ VerifierStopSeverity *pVerifierStopSeverity) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorReporting( 
            /* [retval][out] */ VerifierErrorReporting *pVerifierErrorReporting) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorFlags( 
            /* [retval][out] */ LONG *plFlags) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StopFlags( 
            /* [retval][out] */ LONG *plFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierStopVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierStop * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierStop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierStop * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierStop * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierStop * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierStop * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierStop * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StopCode )( 
            IAppVerifierStop * This,
            /* [retval][out] */ LONG *plStopCode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IAppVerifierStop * This,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Severity )( 
            IAppVerifierStop * This,
            /* [retval][out] */ VerifierStopSeverity *pVerifierStopSeverity);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorReporting )( 
            IAppVerifierStop * This,
            /* [retval][out] */ VerifierErrorReporting *pVerifierErrorReporting);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorFlags )( 
            IAppVerifierStop * This,
            /* [retval][out] */ LONG *plFlags);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StopFlags )( 
            IAppVerifierStop * This,
            /* [retval][out] */ LONG *plFlags);
        
        END_INTERFACE
    } IAppVerifierStopVtbl;

    interface IAppVerifierStop
    {
        CONST_VTBL struct IAppVerifierStopVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierStop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierStop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierStop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierStop_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierStop_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierStop_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierStop_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierStop_get_StopCode(This,plStopCode)	\
    ( (This)->lpVtbl -> get_StopCode(This,plStopCode) ) 

#define IAppVerifierStop_get_Active(This,pbResult)	\
    ( (This)->lpVtbl -> get_Active(This,pbResult) ) 

#define IAppVerifierStop_get_Severity(This,pVerifierStopSeverity)	\
    ( (This)->lpVtbl -> get_Severity(This,pVerifierStopSeverity) ) 

#define IAppVerifierStop_get_ErrorReporting(This,pVerifierErrorReporting)	\
    ( (This)->lpVtbl -> get_ErrorReporting(This,pVerifierErrorReporting) ) 

#define IAppVerifierStop_get_ErrorFlags(This,plFlags)	\
    ( (This)->lpVtbl -> get_ErrorFlags(This,plFlags) ) 

#define IAppVerifierStop_get_StopFlags(This,plFlags)	\
    ( (This)->lpVtbl -> get_StopFlags(This,plFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierStop_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierImageChecks_INTERFACE_DEFINED__
#define __IAppVerifierImageChecks_INTERFACE_DEFINED__

/* interface IAppVerifierImageChecks */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierImageChecks;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("72483051-75af-4c10-8ff7-de021785d817")
    IAppVerifierImageChecks : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *ppunk) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR bstrCheckId,
            /* [retval][out] */ IAppVerifierImageCheck **ppCheck) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierImageChecksVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierImageChecks * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierImageChecks * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierImageChecks * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierImageChecks * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierImageChecks * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierImageChecks * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierImageChecks * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAppVerifierImageChecks * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][hidden][restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAppVerifierImageChecks * This,
            /* [retval][out] */ LPUNKNOWN *ppunk);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAppVerifierImageChecks * This,
            /* [in] */ BSTR bstrCheckId,
            /* [retval][out] */ IAppVerifierImageCheck **ppCheck);
        
        END_INTERFACE
    } IAppVerifierImageChecksVtbl;

    interface IAppVerifierImageChecks
    {
        CONST_VTBL struct IAppVerifierImageChecksVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierImageChecks_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierImageChecks_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierImageChecks_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierImageChecks_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierImageChecks_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierImageChecks_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierImageChecks_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierImageChecks_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IAppVerifierImageChecks_get__NewEnum(This,ppunk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) ) 

#define IAppVerifierImageChecks_get_Item(This,bstrCheckId,ppCheck)	\
    ( (This)->lpVtbl -> get_Item(This,bstrCheckId,ppCheck) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierImageChecks_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierImageCheck_INTERFACE_DEFINED__
#define __IAppVerifierImageCheck_INTERFACE_DEFINED__

/* interface IAppVerifierImageCheck */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierImageCheck;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f3930a1c-3bf9-45e6-8345-735da6761c17")
    IAppVerifierImageCheck : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MajorVersion( 
            /* [retval][out] */ LONG *plMajorVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinorVersion( 
            /* [retval][out] */ LONG *plMinorVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GuidString( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GroupName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LongName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Properties( 
            /* [retval][out] */ IAppVerifierImageProperties **ppProperties) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Stops( 
            /* [retval][out] */ IAppVerifierImageStops **ppStops) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Propigate( 
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierImageCheckVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierImageCheck * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierImageCheck * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierImageCheck * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierImageCheck * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierImageCheck * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierImageCheck * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierImageCheck * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAppVerifierImageCheck * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )( 
            IAppVerifierImageCheck * This,
            /* [retval][out] */ LONG *plMajorVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )( 
            IAppVerifierImageCheck * This,
            /* [retval][out] */ LONG *plMinorVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GuidString )( 
            IAppVerifierImageCheck * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GroupName )( 
            IAppVerifierImageCheck * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IAppVerifierImageCheck * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LongName )( 
            IAppVerifierImageCheck * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Properties )( 
            IAppVerifierImageCheck * This,
            /* [retval][out] */ IAppVerifierImageProperties **ppProperties);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stops )( 
            IAppVerifierImageCheck * This,
            /* [retval][out] */ IAppVerifierImageStops **ppStops);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IAppVerifierImageCheck * This,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IAppVerifierImageCheck * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Propigate )( 
            IAppVerifierImageCheck * This,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        END_INTERFACE
    } IAppVerifierImageCheckVtbl;

    interface IAppVerifierImageCheck
    {
        CONST_VTBL struct IAppVerifierImageCheckVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierImageCheck_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierImageCheck_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierImageCheck_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierImageCheck_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierImageCheck_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierImageCheck_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierImageCheck_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierImageCheck_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IAppVerifierImageCheck_get_MajorVersion(This,plMajorVersion)	\
    ( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) ) 

#define IAppVerifierImageCheck_get_MinorVersion(This,plMinorVersion)	\
    ( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) ) 

#define IAppVerifierImageCheck_get_GuidString(This,pbstr)	\
    ( (This)->lpVtbl -> get_GuidString(This,pbstr) ) 

#define IAppVerifierImageCheck_get_GroupName(This,pbstr)	\
    ( (This)->lpVtbl -> get_GroupName(This,pbstr) ) 

#define IAppVerifierImageCheck_get_Description(This,pbstr)	\
    ( (This)->lpVtbl -> get_Description(This,pbstr) ) 

#define IAppVerifierImageCheck_get_LongName(This,pbstr)	\
    ( (This)->lpVtbl -> get_LongName(This,pbstr) ) 

#define IAppVerifierImageCheck_get_Properties(This,ppProperties)	\
    ( (This)->lpVtbl -> get_Properties(This,ppProperties) ) 

#define IAppVerifierImageCheck_get_Stops(This,ppStops)	\
    ( (This)->lpVtbl -> get_Stops(This,ppStops) ) 

#define IAppVerifierImageCheck_get_Enabled(This,pbResult)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbResult) ) 

#define IAppVerifierImageCheck_put_Enabled(This,Value)	\
    ( (This)->lpVtbl -> put_Enabled(This,Value) ) 

#define IAppVerifierImageCheck_get_Propigate(This,pbResult)	\
    ( (This)->lpVtbl -> get_Propigate(This,pbResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierImageCheck_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierImageProperties_INTERFACE_DEFINED__
#define __IAppVerifierImageProperties_INTERFACE_DEFINED__

/* interface IAppVerifierImageProperties */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierImageProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f7b0dfda-d81b-4641-bc59-06153429f289")
    IAppVerifierImageProperties : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *ppunk) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR bstrPropertyId,
            /* [retval][out] */ IAppVerifierImageProperty **ppProperty) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierImagePropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierImageProperties * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierImageProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierImageProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierImageProperties * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierImageProperties * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierImageProperties * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierImageProperties * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAppVerifierImageProperties * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][hidden][restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAppVerifierImageProperties * This,
            /* [retval][out] */ LPUNKNOWN *ppunk);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAppVerifierImageProperties * This,
            /* [in] */ BSTR bstrPropertyId,
            /* [retval][out] */ IAppVerifierImageProperty **ppProperty);
        
        END_INTERFACE
    } IAppVerifierImagePropertiesVtbl;

    interface IAppVerifierImageProperties
    {
        CONST_VTBL struct IAppVerifierImagePropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierImageProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierImageProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierImageProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierImageProperties_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierImageProperties_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierImageProperties_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierImageProperties_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierImageProperties_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IAppVerifierImageProperties_get__NewEnum(This,ppunk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) ) 

#define IAppVerifierImageProperties_get_Item(This,bstrPropertyId,ppProperty)	\
    ( (This)->lpVtbl -> get_Item(This,bstrPropertyId,ppProperty) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierImageProperties_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierImageProperty_INTERFACE_DEFINED__
#define __IAppVerifierImageProperty_INTERFACE_DEFINED__

/* interface IAppVerifierImageProperty */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierImageProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("af7736d3-7e84-4916-a114-1bbaad0dfd7e")
    IAppVerifierImageProperty : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ VerifierPropertyType *pVerifierPropertyType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT *pvValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT vValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierImagePropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierImageProperty * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierImageProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierImageProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierImageProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierImageProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierImageProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierImageProperty * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAppVerifierImageProperty * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAppVerifierImageProperty * This,
            /* [retval][out] */ VerifierPropertyType *pVerifierPropertyType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IAppVerifierImageProperty * This,
            /* [retval][out] */ VARIANT *pvValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IAppVerifierImageProperty * This,
            /* [in] */ VARIANT vValue);
        
        END_INTERFACE
    } IAppVerifierImagePropertyVtbl;

    interface IAppVerifierImageProperty
    {
        CONST_VTBL struct IAppVerifierImagePropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierImageProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierImageProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierImageProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierImageProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierImageProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierImageProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierImageProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierImageProperty_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IAppVerifierImageProperty_get_Type(This,pVerifierPropertyType)	\
    ( (This)->lpVtbl -> get_Type(This,pVerifierPropertyType) ) 

#define IAppVerifierImageProperty_get_Value(This,pvValue)	\
    ( (This)->lpVtbl -> get_Value(This,pvValue) ) 

#define IAppVerifierImageProperty_put_Value(This,vValue)	\
    ( (This)->lpVtbl -> put_Value(This,vValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierImageProperty_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierImageStops_INTERFACE_DEFINED__
#define __IAppVerifierImageStops_INTERFACE_DEFINED__

/* interface IAppVerifierImageStops */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierImageStops;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6e6c6018-2831-4d57-bdfb-876078e820be")
    IAppVerifierImageStops : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][hidden][restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *ppunk) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG lStopCode,
            /* [retval][out] */ IAppVerifierImageStop **ppStop) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierImageStopsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierImageStops * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierImageStops * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierImageStops * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierImageStops * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierImageStops * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierImageStops * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierImageStops * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAppVerifierImageStops * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][hidden][restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAppVerifierImageStops * This,
            /* [retval][out] */ LPUNKNOWN *ppunk);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAppVerifierImageStops * This,
            /* [in] */ LONG lStopCode,
            /* [retval][out] */ IAppVerifierImageStop **ppStop);
        
        END_INTERFACE
    } IAppVerifierImageStopsVtbl;

    interface IAppVerifierImageStops
    {
        CONST_VTBL struct IAppVerifierImageStopsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierImageStops_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierImageStops_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierImageStops_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierImageStops_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierImageStops_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierImageStops_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierImageStops_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierImageStops_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IAppVerifierImageStops_get__NewEnum(This,ppunk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) ) 

#define IAppVerifierImageStops_get_Item(This,lStopCode,ppStop)	\
    ( (This)->lpVtbl -> get_Item(This,lStopCode,ppStop) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierImageStops_INTERFACE_DEFINED__ */


#ifndef __IAppVerifierImageStop_INTERFACE_DEFINED__
#define __IAppVerifierImageStop_INTERFACE_DEFINED__

/* interface IAppVerifierImageStop */
/* [local][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppVerifierImageStop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d981decb-1e4b-4cdb-9e15-58876f15abf2")
    IAppVerifierImageStop : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StopCode( 
            /* [retval][out] */ LONG *plStopCode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Active( 
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Active( 
            /* [in] */ VARIANT_BOOL vValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Severity( 
            /* [retval][out] */ VerifierStopSeverity *pVerifierStopSeverity) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Severity( 
            /* [in] */ VerifierStopSeverity VerifierStopSeverity) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorReporting( 
            /* [retval][out] */ VerifierErrorReporting *pVerifierErrorReporting) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorReporting( 
            /* [in] */ VerifierErrorReporting errorReporting) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorFlags( 
            /* [retval][out] */ LONG *plFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorFlags( 
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StopFlags( 
            /* [retval][out] */ LONG *plFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StopFlags( 
            /* [in] */ LONG lFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVerifierImageStopVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVerifierImageStop * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVerifierImageStop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVerifierImageStop * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVerifierImageStop * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVerifierImageStop * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVerifierImageStop * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVerifierImageStop * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StopCode )( 
            IAppVerifierImageStop * This,
            /* [retval][out] */ LONG *plStopCode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IAppVerifierImageStop * This,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Active )( 
            IAppVerifierImageStop * This,
            /* [in] */ VARIANT_BOOL vValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Severity )( 
            IAppVerifierImageStop * This,
            /* [retval][out] */ VerifierStopSeverity *pVerifierStopSeverity);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Severity )( 
            IAppVerifierImageStop * This,
            /* [in] */ VerifierStopSeverity VerifierStopSeverity);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorReporting )( 
            IAppVerifierImageStop * This,
            /* [retval][out] */ VerifierErrorReporting *pVerifierErrorReporting);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorReporting )( 
            IAppVerifierImageStop * This,
            /* [in] */ VerifierErrorReporting errorReporting);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorFlags )( 
            IAppVerifierImageStop * This,
            /* [retval][out] */ LONG *plFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorFlags )( 
            IAppVerifierImageStop * This,
            /* [in] */ LONG lFlags);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StopFlags )( 
            IAppVerifierImageStop * This,
            /* [retval][out] */ LONG *plFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StopFlags )( 
            IAppVerifierImageStop * This,
            /* [in] */ LONG lFlags);
        
        END_INTERFACE
    } IAppVerifierImageStopVtbl;

    interface IAppVerifierImageStop
    {
        CONST_VTBL struct IAppVerifierImageStopVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVerifierImageStop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVerifierImageStop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVerifierImageStop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVerifierImageStop_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVerifierImageStop_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVerifierImageStop_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVerifierImageStop_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVerifierImageStop_get_StopCode(This,plStopCode)	\
    ( (This)->lpVtbl -> get_StopCode(This,plStopCode) ) 

#define IAppVerifierImageStop_get_Active(This,pbResult)	\
    ( (This)->lpVtbl -> get_Active(This,pbResult) ) 

#define IAppVerifierImageStop_put_Active(This,vValue)	\
    ( (This)->lpVtbl -> put_Active(This,vValue) ) 

#define IAppVerifierImageStop_get_Severity(This,pVerifierStopSeverity)	\
    ( (This)->lpVtbl -> get_Severity(This,pVerifierStopSeverity) ) 

#define IAppVerifierImageStop_put_Severity(This,VerifierStopSeverity)	\
    ( (This)->lpVtbl -> put_Severity(This,VerifierStopSeverity) ) 

#define IAppVerifierImageStop_get_ErrorReporting(This,pVerifierErrorReporting)	\
    ( (This)->lpVtbl -> get_ErrorReporting(This,pVerifierErrorReporting) ) 

#define IAppVerifierImageStop_put_ErrorReporting(This,errorReporting)	\
    ( (This)->lpVtbl -> put_ErrorReporting(This,errorReporting) ) 

#define IAppVerifierImageStop_get_ErrorFlags(This,plFlags)	\
    ( (This)->lpVtbl -> get_ErrorFlags(This,plFlags) ) 

#define IAppVerifierImageStop_put_ErrorFlags(This,lFlags)	\
    ( (This)->lpVtbl -> put_ErrorFlags(This,lFlags) ) 

#define IAppVerifierImageStop_get_StopFlags(This,plFlags)	\
    ( (This)->lpVtbl -> get_StopFlags(This,plFlags) ) 

#define IAppVerifierImageStop_put_StopFlags(This,lFlags)	\
    ( (This)->lpVtbl -> put_StopFlags(This,lFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVerifierImageStop_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AppVerifierManager;

#ifdef __cplusplus

class DECLSPEC_UUID("597c1ef7-fc28-451e-8273-417c6c9244ed")
AppVerifierManager;
#endif
#endif /* __APPVERIFIER_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


