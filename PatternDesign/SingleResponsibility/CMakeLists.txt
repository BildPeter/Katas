#THIS FILE SHOULD BE PUT INTO THE OF PROJECT FOLDER

# ========================================================
# ===================== CMake Settings ===================
# ========================================================
cmake_minimum_required( VERSION 3.3 )
project( kata_SingleResponsibility )

# ========================================================
# ===================== User Settings ====================
# ========================================================
# ---------------------- App name  -----------------------
set( APP_NAME   kataSingleApp )

# ------------------------ OF Path -----------------------
# --- If outside the OF stucture, set an absolute OF path
set( OF_DIRECTORY_BY_USER ../../of )

# --------------------- Source Files ---------------------
set( ${APP_NAME}_SOURCE_FILES
        src/main.cpp
        src/ofApp.cpp )


# ------------------------ AddOns  -----------------------
set( OFX_ADDONS_ACTIVE
        #        ofxXmlSettings
        #        ofxOsc
        #        ofxGui
        #        ofxNetwork
        #        ofxVectorGraphics
        #        ofxThreadedImageLoader
        #        ofxAssimpModelLoader
        #        ofxKinect
        #        ofxOpenCv
        #        ofxSvg
        #        ofxEmscripten (untested)
                )

# =========================================================================
# ============================== OpenFrameworks ===========================
# =========================================================================
include( ${OF_DIRECTORY_BY_USER}/addons/ofxCMake/modules/main.cmake )
# =========================================================================

