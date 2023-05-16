import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
// import App from './App';
import reportWebVitals from './reportWebVitals';
import "bootstrap5/src/css/bootstrap.min.css";
import Navbar from './compo_pre/Navbar';
// import Resturent from './compo_pre/binod/restorent'
const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
    {/* <App /> */}
    <Navbar/>
    {/* {<Resturent/>} */}



  </React.StrictMode>
);


reportWebVitals();
