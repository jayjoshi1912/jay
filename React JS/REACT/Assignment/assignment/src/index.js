import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';
import Nav from './AssiCompo/10Nav';
import 'bootstrap5/src/css/bootstrap.min.css'

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  // <React.StrictMode>
  //   {/* <App /> */}
  // </React.StrictMode>
  <Nav/>
);



reportWebVitals();
