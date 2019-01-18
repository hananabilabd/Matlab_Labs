function varargout = CarGUI(varargin)
% CARGUI MATLAB code for CarGUI.fig
%      CARGUI, by itself, creates a new CARGUI or raises the existing
%      singleton*.
%
%      H = CARGUI returns the handle to a new CARGUI or the handle to
%      the existing singleton*.
%
%      CARGUI('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in CARGUI.M with the given input arguments.
%
%      CARGUI('Property','Value',...) creates a new CARGUI or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before CarGUI_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to CarGUI_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help CarGUI

% Last Modified by GUIDE v2.5 10-Jan-2019 15:04:54

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @CarGUI_OpeningFcn, ...
                   'gui_OutputFcn',  @CarGUI_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before CarGUI is made visible.
function CarGUI_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to CarGUI (see VARARGIN)

% Choose default command line output for CarGUI
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes CarGUI wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = CarGUI_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in pushbutton1.
%Forward Button
function pushbutton1_Callback(hObject, eventdata, handles)
set_param('car2/Pulse Generator','Amplitude','0');
set_param('car2/Pulse Generator1','Amplitude','5');
set_param('car2/Pulse Generator2','Amplitude','0');
set_param('car2/Pulse Generator3','Amplitude','5');
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton2.
%Backward Button
function pushbutton2_Callback(hObject, eventdata, handles)
set_param('car2/Pulse Generator','Amplitude','5');
set_param('car2/Pulse Generator1','Amplitude','0');
set_param('car2/Pulse Generator2','Amplitude','5');
set_param('car2/Pulse Generator3','Amplitude','0');
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton3.
%Right Button
function pushbutton3_Callback(hObject, eventdata, handles)
set_param('car2/Pulse Generator','Amplitude','0');
set_param('car2/Pulse Generator1','Amplitude','5');
set_param('car2/Pulse Generator2','Amplitude','0');
set_param('car2/Pulse Generator3','Amplitude','0');
% hObject    handle to pushbutton3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton4.
%Left Button
function pushbutton4_Callback(hObject, eventdata, handles)
set_param('car2/Pulse Generator','Amplitude','0');
set_param('car2/Pulse Generator1','Amplitude','0');
set_param('car2/Pulse Generator2','Amplitude','0');
set_param('car2/Pulse Generator3','Amplitude','5');
% hObject    handle to pushbutton4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton5.
%stop button
function pushbutton5_Callback(hObject, eventdata, handles)
set_param('car2/Pulse Generator','Amplitude','0');
set_param('car2/Pulse Generator1','Amplitude','0');
set_param('car2/Pulse Generator2','Amplitude','0');
set_param('car2/Pulse Generator3','Amplitude','0');
% hObject    handle to pushbutton5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
