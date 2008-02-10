/////////////////////////////////////////////////////////////////////////////
// Name:        isosurf.h
// Purpose:     wxGLCanvas demo program
// Author:      Brian Paul (original gltk version), Wolfram Gloger
// Modified by: Julian Smart
// Created:     04/01/98
// RCS-ID:      $Id$
// Copyright:   (c) Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ISOSURF_H_
#define _WX_ISOSURF_H_

// Define a new application type
class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};


class TestGLCanvas : public wxGLCanvas
{
public:
    TestGLCanvas(wxWindow *parent,
                 wxWindowID id = wxID_ANY,
                 const wxPoint& pos = wxDefaultPosition,
                 const wxSize& size = wxDefaultSize,
                 long style = 0,
                 const wxString& name = _T("TestGLCanvas"),
                 int *gl_attrib = NULL);

    virtual ~TestGLCanvas();

    void OnPaint(wxPaintEvent& event);
    void OnSize(wxSizeEvent& event);
    void OnChar(wxKeyEvent& event);
    void OnMouseEvent(wxMouseEvent& event);


private:
    wxGLContext* m_glRC;

    DECLARE_NO_COPY_CLASS(TestGLCanvas)
    DECLARE_EVENT_TABLE()
};


class MyFrame : public wxFrame
{
public:
    MyFrame(wxFrame *frame,
            const wxString& title,
            const wxPoint& pos,
            const wxSize& size,
            long style = wxDEFAULT_FRAME_STYLE);

    virtual ~MyFrame();

    TestGLCanvas *m_canvas;

private :
    void OnExit(wxCommandEvent& event);

    DECLARE_EVENT_TABLE()
};

#endif // _WX_ISOSURF_H_

